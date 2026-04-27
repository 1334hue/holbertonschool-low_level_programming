#include "hash_tables.h"

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    hash_node_t *new_node, *temp;
    char *val_copy;

    if (!ht || !key || !*key || !value)
        return (0);

    index = key_index((const unsigned char *)key, ht->size);

    /* Check if key already exists to update value */
    temp = ht->array[index];
    while (temp)
    {
        if (strcmp(temp->key, key) == 0)
        {
            val_copy = strdup(value);
            if (!val_copy)
                return (0);
            free(temp->value);
            temp->value = val_copy;
            return (1);
        }
        temp = temp->next;
    }

    /* Create new node if key doesn't exist */
    new_node = malloc(sizeof(hash_node_t));
    if (!new_node)
        return (0);

    new_node->key = strdup(key);
    new_node->value = strdup(value);
    if (!new_node->key || !new_node->value)
    {
        free(new_node->key);
        free(new_node);
        return (0);
    }

    /* Add to the beginning of the list (Prepend) */
    new_node->next = ht->array[index];
    ht->array[index] = new_node;

    return (1);
}

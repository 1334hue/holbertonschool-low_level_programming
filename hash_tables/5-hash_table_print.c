#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: The hash table to print.
 *
 * Description: Prints the key/value in the order they appear in the array.
 */
void hash_table_print(const hash_table_t *ht)
{
    unsigned long int i;
    hash_node_t *node;
    int first_pair = 1;

    if (ht == NULL)
        return;

    printf("{");
    for (i = 0; i < ht->size; i++)
    {
        node = ht->array[i];
        while (node)
        {
            /* Print a comma and space before every pair except the first */
            if (!first_pair)
                printf(", ");

            printf("'%s': '%s'", node->key, node->value);
            first_pair = 0;
            node = node->next;
        }
    }
    printf("}\n");
}

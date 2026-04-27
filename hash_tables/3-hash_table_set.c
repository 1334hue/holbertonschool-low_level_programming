#include "hash_tables.h"

/**
 * hash_table_set - Adds or updates an element in the hash table.
 * @ht: The hash table to add/update.
 * @key: The key (cannot be an empty string).
 * @value: The value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *new, *temp;
	char *v_copy;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[idx];
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			v_copy = strdup(value);
			if (v_copy == NULL)
				return (0);
			free(temp->value);
			temp->value = v_copy;
			return (1);
		}
		temp = temp->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	if (new->key == NULL || new->value == NULL)
	{
		free(new->key);
		free(new);
		return (0);
	}
	new->next = ht->array[idx];
	ht->array[idx] = new;
	return (1);
}

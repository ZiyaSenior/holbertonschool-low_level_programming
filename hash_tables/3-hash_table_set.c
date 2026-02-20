#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>

/**
 * hash_table_set - Adds or updates an element in a hash table.
 * @ht: The hash table.
 * @key: The key (must not be an empty string).
 * @value: The value associated with the key (must be duplicated).
 *
 * Return: 1 if succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *current;
	char *value_dup;
	unsigned long int index;

	if (!ht || !key || !*key || !value)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			if (!current->value)
				return (0);
			return (1);
		}
		current = current->next;
	}
	value_dup = strdup(value);
	if (!value_dup)
		return (0);
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
	{
		free(value_dup);
		return (0);
	}
	new_node->key = strdup(key);
	if (!new_node->key)
	{
		free(new_node);
		free(value_dup);
		return (0);
	}
	new_node->value = value_dup;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}

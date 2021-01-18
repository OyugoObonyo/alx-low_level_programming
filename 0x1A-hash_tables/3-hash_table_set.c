#include "hash_tables.h"

/**
 * hash_table_set - Populates hash table
 * @ht: hash table
 * @key: Key
 * @value: Value
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int hash;
	hash_node_t *new = NULL, *list = NULL;

	if (!key || !ht || !value)
		return (0);
	hash = hash_djb2((unsigned char *)key);
	list = ht->array[hash % ht->size];
	while (list)
	{
		if (!strcmp(list->key, key))
		{
			free(list->value);
			list->value = strdup(value);
			if (!list->value)
				return (0);
			return (1);
		}
		list = list->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	new->key = strdup(key);
	if (!new->key)
	{
		free(new);
		return (0);
	}
	new->value = strdup(value);
	if (!new->value)
	{
		free(new->key), free(new);
		return (0);
	}
	new->next = ht->array[hash % ht->size];
	ht->array[hash % ht->size] = new;
	return (1);
}

#include "hash_tables.h"

/**
 * hash_table_get - gets hash table value based on key
 * @ht: hash table
 * @key: key
 * Return: Value associated with key, NULL if key cannot be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int hash;
	hash_node_t *list = NULL;

	if (!ht)
		return (NULL);
	hash = hash_djb2((unsigned char *)key);
	list = ht->array[hash % ht->size];
	while (list)
	{
		if (!strcmp(list->key, key))
		{
			return (list->value);
		}
		list = list->next;
	}
	return (NULL);
}

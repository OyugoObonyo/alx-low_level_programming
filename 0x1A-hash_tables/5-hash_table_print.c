#include "hash_tables.h"

/**
 * hash_table_print - Prints hash table
 * @ht: hash table
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	size_t i = 0, c = 0;
	hash_node_t *array = NULL;
	char *del = "";

	if (!ht)
		return;
	printf("{");
	while (i < ht->size)
	{
		if (ht->array[i])
		{
			array = ht->array[i];
			while (array)
			{
				c++;
				if (c != 1)
					del = ", ";
				printf("%s'%s': ", del, array->key);
				printf("'%s'", array->value);
				array = array->next;
			}
		}
		i++;
	}
	printf("}\n");
}

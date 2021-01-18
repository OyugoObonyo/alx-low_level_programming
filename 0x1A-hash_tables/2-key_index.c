#include "hash_tables.h"

/**
 * key_index - gets index based on key
 * @key: Key, or string
 * @size: Size of the hash table
 * Return: Index of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);
	return (hash % size);
}

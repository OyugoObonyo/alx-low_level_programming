#include <stdlib.h>
#include "holberton.h"

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to memory previously allocated (malloc(old_size))
 * @old_size: byte size of allocated space for ptr
 * @new_size: new byte size of new memory block
 * Return: NULL - if new_size == 0 & ptr is not NULL
 *         ptr - if new_size == old_size
 *         Otherwise - Pointer to the reallocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int added_mem, i;
	char *mem_block;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size > old_size)
		added_mem = old_size;
	else
		added_mem = new_size;

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	mem_block = malloc(new_size);

	if (mem_block == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < added_mem; i++)
	{
		mem_block[i] = ((char *)ptr)[i];
	}
	free(ptr);
	return (mem_block);
}

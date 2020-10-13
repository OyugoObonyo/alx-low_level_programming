#include "holberton.h"
#include <stdlib.h>

/**
 *create_array - creates and array of chars
 *@size: size of array
 *@c: character to be printed
 *
 *Return: char
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(size);
	if (size == 0 || ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}

	if (!ptr)
		return (NULL);
	else
		return (ptr);
}

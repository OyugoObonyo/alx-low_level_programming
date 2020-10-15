#include <stdlib.h>
#include "holberton.h"

/**
*malloc_checked-allocates memory using malloc
*@b: Parameter
*
*Return: Status value of 98
*/

void *malloc_checked(unsigned int b)
{
void *ptr;
	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}

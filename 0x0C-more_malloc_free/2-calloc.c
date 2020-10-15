#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
*_calloc-allocates memory for array
*@nmemb: parameter 1
*@size: parameter 2
*
*Return: void pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *x;
	unsigned int a;

	if (nmemb == 0 || size == 0)
		return (NULL);

	x = malloc(nmemb * size);
	if (x == NULL)
		return (NULL);

	for (a = 0; a < nmemb * size; a++)
		x[a] = 0;

	return (x);

}

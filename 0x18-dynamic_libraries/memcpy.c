#include "holberton.h"

/**
 * _memcpy - function copies memory area
 * @dest: destination to copy to
 * @src: source to copy from
 * @n: limiter to looping index
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *pdest = dest;
	char *psrc = src;

	i = 0;
	while (i < n)
	{
		pdest[i] = psrc[i];
		i++;
	}
	return (dest);
}

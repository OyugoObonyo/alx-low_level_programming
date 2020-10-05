#include "holberton.h"
#include <stdio.h>
/**
 * _memset - replace n characters with b
 * @s: memory address for the string value
 * @b: the value to replace the chars
 * @n: the number of chars to replace
 *
 * Description: only (n) chars are replaced
 * Return: Always(0) Success
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *src = (char *)s;

	for (i = 0; i < n; i++)
		src[i] = b;

	return (src);
}

#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>

int _strlen(char *s);
/**
*string_nconcat-concatenates 2 strings
*@s1:Parameter 1
*@s2:Parameter 2
*@n:Parameter 3
*
*Return:concatenated string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j, size, len1, len2;
char *ptr;

if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";
len1 = _strlen(s1);
len2 = _strlen(s2);
if (n > len2)
	n = len2;
size = len1 + n;
ptr = malloc(sizeof(char) * size + 1);
if (!ptr)
	return (NULL);
for (i = 0; i < len1; i++)
	ptr[i] = s1[i];
for (j = 0; j < n; j++, i++)
	ptr[i] = s2[j];
ptr[i] = 0;
return (ptr);
}

/**
 * _strlen - returns the length of a string
 * @s: string s
 * Return: length of string
 */
int _strlen(char *s)
{
	char *p = s;

	while (*s)
		s++;
	return (s - p);
}

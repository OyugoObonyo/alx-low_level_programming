#include "holberton.h"

/**
 * *_strncat-concatenates two strings
 * @dest: parameter 1
 * @src: parameter 2
 * @n: condition to null terminate src
 * Return: pointer to destination string dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i;
int j;

i = 0;
while (dest[i] != '\0')
{
i++;
}

for (j = 0; j < n && src[j] != '\0'; j++, i++)
{
dest[i] = src[j];
}
dest[i] = '\0';
return (dest);
}

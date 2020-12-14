#include "holberton.h"
#include <stdio.h>

/**
 * *_strchr - locates a character in a string
 * @s: pointer string containing character to be located
 * @c: byte to be located
 * Return: pointer to 1st occurrence of c in s, NULL if character not found
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	i = 0;
	while (s[i] >= '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	return ('\0');
}

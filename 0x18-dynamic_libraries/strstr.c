#include "holberton.h"
#include <stdio.h>

/**
 * _strstr - function that locates a substring.
 * @haystack: pointer.
 * @needle: character.
 * Return: Pointer to the beginning of the located substring or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int a, b, c;

	for (a = 0; haystack[a] != '\0'; a++)
	{
		for (c = a, b = 0; needle[b] != '\0'; b++, c++)
		{
			if (needle[b] != haystack[c] || haystack[c] == '\0')
			{
				break;
			}
		}
		if (needle[b] == '\0')
		{
			return (haystack + a);
		}
	}
	return (0);
}

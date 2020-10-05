#include "holberton.h"
/**
 * _strspn - gets len of prefix substring
 * @s: first parameter
 * @accept: second parameter
 *
 * Description: checks in that order
 * Return: Always(0) Success
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
				break;
		}
		if (!accept[j])
			break;
	}
	return (i);
}

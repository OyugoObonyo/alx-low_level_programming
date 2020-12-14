#include "holberton.h"

/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: result
 */
int _strcmp(char *s1, char *s2)
{
int i;
int result;

for (i = 0; s1[i] != '\0'; i++)
{
if (s1[i] > s2[i])
{
result = s1[i] - s2[i];
return (result);
}
else if (s1[i] < s2[i])
{
result = s1[i] - s2[i];
return (result);
}
}
return (0);
}

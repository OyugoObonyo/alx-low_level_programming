#include "holberton.h"


/**
 * *cap_string - capitalizes all words of a string
 * @s: string
 * Return: char
 */
char *cap_string(char *s)
{
int i;
int j;

i = 0;
while (s[i] != '\0')
{
i++;
}

j = 0;
while (j < i)
{
if (j == 0 && s[j] >= 'a' && s[j] <= 'z')
{
s[j] = s[j] - 32;
}

if ((s[j] == ',' || s[j] == ';' || s[j] == '.'
|| s[j] == '!' || s[j] == '?' || s[j] == '"'
|| s[j] == '(' || s[j] == ')' || s[j] == '{'
|| s[j] == '}' || s[j] == ' ' || s[j] == '\t'
|| s[j] == '\n') && (s[j + 1] >= 'a' && s[j + 1] <= 'z'))
{
s[j + 1] = s[j + 1] - 32;
}
j++;
}
return (s);
}

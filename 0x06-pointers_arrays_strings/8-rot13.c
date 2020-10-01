#include "holberton.h"

/**
 * rot13- Encodes a string using rot13
 *
 * @str: String
 * Return: 0 f successful.
 */
char *rot13(char *str)
{
int i = 0, k;
char s[] =  "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char s1[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (; str[i] != '\0'; i++)
{
for (k = 0; k <= 51; k++)
{
if (s[k] == str[i])
{
str[i] = s1[k];
}
}
}
return (str);
}

# include "holberton.h"

/**
 * _islower - Checks for lowercase characters
 *@c:parameter to check if it is lower case
 * Return: (1) if character is lower and (0) if not
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}

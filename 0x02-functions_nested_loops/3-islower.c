# include "holberton.h"

/**
 * int _islower(int c); - Checks for lowercase characters
 *
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

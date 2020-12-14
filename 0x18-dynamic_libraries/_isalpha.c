#include "holberton.h"

/**
*_isalpha - Checks for alphabetic character
*@c:parameter to check if character is a letter
*Return: (1) if character is a letter and (0) if not
*/

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}

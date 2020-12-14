#include "holberton.h"

/**
*_isupper-Checks if character is uppercase
*@c:Character to be checked
*Return:(1) if c is uppercase and (0) if not
*/

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}

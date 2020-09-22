#include "holberton.h"

/**
*_abs - computes absolute value
*@n:Number entered
*Return: absolute value of n
*/

int _abs(int n)
{
if (n < 0)
{
return (n * -1);
}
else if (n > 0)
{
return (n);
}
else
{
return (0);
}
}

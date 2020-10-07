B#include "holberton.h"

/**
 *_pow_recursion- function that gives power of x by y
 *@x:1st parameter
 *@y:2nd parameter
 *Return: power of x
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
return (x * _pow_recursion(x, y - 1));
}
	}

#include "holberton.h"

/**
 *Sqrt-helper function
 *@n:parameter 1
 *@i:parameter 2
 *Return:square root of a number
 */

int Sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
if (i * i == n)
return (i);
return (Sqrt(n, i + 1));
}
/**
 *_sqrt_recursion-returns natural square root of a number
 *@n:parameter
 *Return:square root of a number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (Sqrt(n, 1));
}


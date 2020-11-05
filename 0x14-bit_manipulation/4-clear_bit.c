#include "holberton.h"
/**
 *clear_bit - set bit by an index to 0
 *@n: number
 *@index: index
 *Return: 1, 0 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int check =  1;

	if (index > sizeof(n) * 4)
		return (-1);
	check <<= index;
	if (check & *n)
		*n &= ~check;
	return (1);
}

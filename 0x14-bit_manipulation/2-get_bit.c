#include "holberton.h"
/**
 *get_bit - get bit by an index
 *@n: number
 *@index: index
 *Return: 1, 0 or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int check =  1;

	if (index > sizeof(n) * 8)
		return (-1);
	check <<= index;
	if (check &  n)
		return (1);
	else
		return (0);
}

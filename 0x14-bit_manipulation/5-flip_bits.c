#include "holberton.h"

/**
 * flip_bits - return the difference between 2 numbers
 * @n: number 1
 * @m: number 2
 * Return: count
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int sum = 0;
	unsigned int cont = 0;

	sum = n ^ m;

	while (sum > 0)
	{
		if (sum & 1)
			cont++;
		sum >>= 1;
	}
	return (cont);
}

#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - Sum of two diagonals of a square matrix of integers
 * @a: 2d Array of a matrix
 *@size: size of a matrix
 *Return: No return Value. Function is void
 */

void print_diagsums(int *a, int size)
{
	int m;
	int sum_d1, sum_d2;

	sum_d1 = 0;
	sum_d2 = 0;

	m = 0;
	while (m < size)
	{
		sum_d1 += *(a + m * size + m);
		sum_d2 += *(a + m * size + size - m - 1);

		m++;
	}

	printf("%d, %d\n", sum_d1, sum_d2);

}

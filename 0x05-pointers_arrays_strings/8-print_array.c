#include "holberton.h"
#include <stdio.h>
/**
 *print_array-Prints particular number of elements of a string
 *@a:parameter 1
 *@n:parameter 2
 * Return:void
 */

void print_array(int *a, int n)
{
int j;

for (j = 0; j < n; j++)
{
printf("%d", a[j]);

if (j != (n - 1))
{
printf(", ");
}
}
printf("\n");
}

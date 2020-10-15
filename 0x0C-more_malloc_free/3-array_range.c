#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: parameter 2
 * @max: parameter 1
 * Return: x.
 */
int *array_range(int min, int max)
{
	int *x;
	int a, len;

	if (min > max)
	{
		return (NULL);
	}

	len = max - min + 1;
	x = malloc(sizeof(int) * len);
	if (x == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < len; a++)
	{
		x[a] = min;
		min++;
	}
	return (x);
}

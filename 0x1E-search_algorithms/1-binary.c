#include "search_algos.h"

/**
 * print_array - prints the contents inside the array
 * @array: the array to print
 * @l: start point
 * @r: end point
 * Return: void
 */
void print_array(int *array, size_t l, size_t r)
{
	size_t i;

	i = l;
	if (i <= r)
		printf("Searching in array: ");
	while (l <= r)
	{
		printf("%u", array[l]);
		if (l != r)
			printf(", ");
		++l;
	}

	if (i <= r)
		printf("\n");
}


/**
 *binary_search - finds an element in an array using binary search
 *@array: array to be traversed
 *@size: size of the array
 *@value: element to be searched
 *Return: Element's array index if successful and -1 if not
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	int middle;

	while (left <= right)
	{
		middle = (left + right) / 2;
		print_array(array, left, right);
		if (value == array[middle])
		{
			return (middle);
		}
		else if (value < array[middle])
		{
			right = middle - 1;
		}
		else
		{
			left = middle + 1;
		}
	}
	return (-1);
}

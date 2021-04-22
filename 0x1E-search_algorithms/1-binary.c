#include "search_algos.h"

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
	size_t i;

	while (left <= right)
	{
		middle = (left + right) / 2;
		printf("Searching in array: ");
		for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

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

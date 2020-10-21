#include "function_pointers.h"

/**
*int_index-searches for an integer
*@array:parameter 1
*@size:parameter 2
*@cmp:parameter 3
*Return:Integer
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]) != 0)
			return (x);
	}
	return (-1);
}

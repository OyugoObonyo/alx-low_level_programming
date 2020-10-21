#include <stdio.h>
#include "function_pointers.h"

/**
*array_iterator-executes function on each element of the array
*@array:Parameter 1
*@size:Parameter 2
*@action:Parameter 3
*Return:Nothing
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action && size)
	{
	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
}

#include "function_pointers.h"

/**
*print_name-Prints a name
*@name:Parameter 1
*@f:parameter 2
*Return:Nothing
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	f(name);
}

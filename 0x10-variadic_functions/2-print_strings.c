#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *print_strings- Prints a string followed by a new line
 *@separator: Parameter 1
 *@n: Parameter 2
 *return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *str;

	va_start(args, n);

		for (i = 0; i < n; i++)
		{
			str = va_arg(args, char *);
			if (str != NULL)
			{
				printf("%s", str);
			}
		else
		{
			printf("(nil)");
		}

	if (i != (n - 1) && separator != NULL)
	{
	printf("%s", separator);
	}
		}
	va_end(args);
	printf("\n");
}


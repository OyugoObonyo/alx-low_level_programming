#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *print_all-Prints anything
 *@format: List of all types of arguements
 *Return- Nothing
 *solution creds to Wanjiku
 */

void print_all(const char * const format, ...)
{
	int num, character;
	double num_D;
	char *str;
	char const *print_loop;

	va_list args;

	va_start(args, format);

	for (print_loop = format; *print_loop != '\0'; print_loop++)
	{
		switch (*print_loop)
		{
		case 'i':
			num = va_arg(args, int);
			printf("%i, ", num);
			break;
		case 'c':
			character = va_arg(args, int);
			printf("%c, ", character);
			break;
		case 'f':
			num_D = va_arg(args, double);
			printf("%f, ", num_D);
			break;
		case 's':
			str = va_arg(args, char *);
			printf("%s", str);
			break;
		}
	}
	va_end(args);
	printf("\n");
}

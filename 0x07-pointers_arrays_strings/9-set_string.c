#include "holberton.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to pointer
 * @to: value to be set
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}

#include "holberton.h"

/**
*print_line-Draws a straight line in the terminal
*@n:only parameter
*Return:void
*/

void print_line(int n)
{
int i;

for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}

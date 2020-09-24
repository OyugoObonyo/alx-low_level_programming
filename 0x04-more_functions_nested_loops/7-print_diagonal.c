#include "holberton.h"
/**
* print_diagonal- prints a diagonal line
* @n: only parameter
*Return: void
*/
void print_diagonal(int n)
{
int i = 0, s;

if (n > 0)
{
while (i < n)
{
for (s = 0; s < i; s++)
_putchar(' ');

_putchar('\\');
_putchar('\n');
i++;
}
}
else
_putchar('\n');
}

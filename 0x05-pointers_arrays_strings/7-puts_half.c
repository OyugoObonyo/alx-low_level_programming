#include "holberton.h"

/**
 * puts_half-Prints string in half
 * @str:parameter
 *
 * Return:void
 */

void puts_half(char *str)
{
int m;
int n;

m = 0;
while (str[m] != '\0')
{
m++;
}
n = 0;
n = m / 2;
if (m % 2 != 0)
{
n++;
}
while (str[n] != '\0')
{
_putchar(*(str + n));
n++;
}
_putchar('\n');
}

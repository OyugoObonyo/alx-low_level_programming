#include "holberton.h"

/**
*more_numbers-Prints 0 to 14 10 times
*
*Return: void
*/

void more_numbers(void)
{
int a, b;

for (a = 0; a <= 9; a++)
{
for (b = 0; b <= 14; b++)
{
if (b > 9)
_putchar((b / 10) + '0');
_putchar(b % 10 + '0');
}
_putchar('\n');
}
}

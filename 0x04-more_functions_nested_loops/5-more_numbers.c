#include "holberton.h"

/**
*more_numbers-Prints 0 to 14 10 times
*
*Return: void
*/

void more_numbers(void)
{
void more_numbers(void)
{
int i, j;

for (j = 0; j <= 9; j++)
{
for (i = 0; i <= 14; i++)
{
if (i > 9)
_putchar((i / 10) + '0');
_putchar(i % 10 + '0');
}
_putchar('\n');
}

#include "holberton.h"

/**
*print_most_numbers-prints 0 to 9 except for 2 and 4
*
* Return:void
*/

void print_most_numbers(void)
{
int a;
for (a = 0; a <= 9; a++)
{
if (a != 2 && a != 4)
{
_putchar (a + 48);
}
}
_putchar ('\n');
}

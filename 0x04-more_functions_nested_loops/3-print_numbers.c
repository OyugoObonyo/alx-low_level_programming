#include "holberton.h"

/**
*print_numbers-prints 0 to 9
*
* Return:Always 0 if successful
*/

void print_numbers(void)
{
int a;
for (a >= 48; a < 58; a++)
{
_putchar(a + 48);
}
_putchar('\n');
return (0);
}

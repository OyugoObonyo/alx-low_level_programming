#include "holberton.h"

/**
* print_rev-Prints reverse of a string
* @s:parameter
*
* Return:void
*/

void print_rev(char *s)
{
int m, n;

for (m = 0; s[m] != '\0'; m++)
{
}
for (n = m - 1; n >= s[m]; n--)
{
_putchar(s[n]);
}
_putchar('\n');
}

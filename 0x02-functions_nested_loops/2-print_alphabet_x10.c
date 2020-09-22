#include "holberton.h"

/**
* print_alphabet_x10 - 10 times alphabet, in lowercase with
*
* Return: Always 0 (success)
*/

void print_alphabet_x10(void)
{
int i;
char alphabet;

for (i = 0; i <= 9; i++)
{
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}
_putchar('\n');
}
}

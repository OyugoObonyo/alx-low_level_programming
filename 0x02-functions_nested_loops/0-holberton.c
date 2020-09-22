#include "holberton.h"

/**
*main - print Holberton
*
*Return: Always 0
*
**/

int main(void)
{
char school[10] = "Holberton";
int i = 0;

for (i = 0; i <= 9; i++)
{
_putchar(school[i]);
}
_putchar('\n');

return (0);
}

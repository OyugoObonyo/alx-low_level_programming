#include "holberton.h"

/**
 *print_last_digit - Prints last digit of a number
 *@x:Number entered
 *Return: Returns the last digit of n
 */

int print_last_digit(int x)
{
int last;

if (x < 0)
{
last = (x % 10) * -1;
}
else
{
last = x % 10;
}
_putchar (last + '0');
return (last);
}

#include "holberton.h"

/**
 *print_sign - Prints sign of a number
 *@n:number entered
 *Return:1-if n is greater than zero: 0 if n equals 0:-1-if n is less than 0
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
  _putchar('-');
return (-1);
}
}

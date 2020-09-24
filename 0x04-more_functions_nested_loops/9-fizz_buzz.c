#include <stdio.h>

/**
 * main-prints fizz for divisibles of 3.Buzz for divisbles of 3.
 *fizzbuzz for divisibles of both
 * Return: 0;
 */
int main(void)
{
int i;

for (i = 1; i <= 99; i++)
{
if (i % 15 == 0)
printf("FizzBuzz ");
else if (i % 3 == 0)
printf("Fizz ");
else if (i % 5 == 0)
printf("Buzz ");
else
printf("%i ", i);
}
printf("Buzz\n");
return (0);
}

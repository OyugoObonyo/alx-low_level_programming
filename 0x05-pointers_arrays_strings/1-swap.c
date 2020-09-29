#include "holberton.h"
/**
 *reset_to_98-swaps value of two integers
 *@a:1st operand
 *@b:2nd operand
 *Return: void
 */

void swap_int(int *a, int *b);
{
int temp;

temp = *a;
*a = *b;
*b = temp;
}


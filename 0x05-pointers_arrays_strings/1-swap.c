#include "holberton.h"
/**
 *swap_int-swaps value of two integers
 *@a:1st operand
 *@b:2nd operand
 *Return: void
 */

void swap_int(int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;
}


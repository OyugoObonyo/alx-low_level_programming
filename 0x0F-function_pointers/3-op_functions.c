#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 *op_add - add two integers
 *@a: first integer
 *@b: second integer
 *Return: sum of two integers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - subtracts two integers
 *@a: first integer
 *@b: second integer
 *Return: difference of two integers
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - multiplies two integers
 *@a: first integer
 *@b: second integer
 *Return: product of two integers
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - divides two integers
 *@a: first integer
 *@b: second integer
 *Return: quotient of two integers
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 *op_mod - finds modulus of two integers
 *@a: first integer
 *@b: second integer
 *Return: remainter from dividing two numbers
 */

int op_mod(int a, int b)
{
	return (a % b);
}

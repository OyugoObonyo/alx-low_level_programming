#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - returns result of calculation
 * @argc: first parameter
 * @argv: second parameter
 *solution credit from Ian
 * Description: returns result of calculation
 * Return: Always(0) Success
 */
int main(int argc, char *argv[])
{
	int calc, num1, num2;
	char operator[1];

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	strcpy(operator, *(argv + 2));
	num2 = atoi(argv[3]);


	if (get_op_func(operator) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	calc = (get_op_func(operator)(num1, num2));

	printf("%d\n", calc);

	return (0);
}



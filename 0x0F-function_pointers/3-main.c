#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the result between two operators.
 * @argc: number of arguments received.
 * @argv: array of arguments received.
 *
 * Return: 0 (success).
 */

int main(int argc, char *argv[])
{
	int num1 = 0;
	int num2 = 0;
	int res;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	res = get_op_func(argv[2])(num1, num2);

	printf("%d\n", res);

	return (0);
}

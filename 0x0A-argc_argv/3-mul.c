#include <stdio.h>
#include <stdlib.h>

/**
 *main-Entry point
 *@argc:1st parameter
 *@argv:2nd parameter
 *Return:0 if successful
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		}
	return (0);
}

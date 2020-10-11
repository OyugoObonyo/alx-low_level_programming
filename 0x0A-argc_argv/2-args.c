#include <stdio.h>

/**
 *main-entry point
 *@argc:arguement count
 *@argv:arguement vector
 *Return:0 if successful
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

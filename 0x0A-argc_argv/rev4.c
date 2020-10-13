#include <stdio.h>

int _isDigit(char a)
{

	if (a >= '0' && a <= '9')
	{
		return (1);
	}
	return (0);
}

int mapToInt(char *s)
{
	int num = 0;
    
	while (*s)
	{
		if (_isDigit(*s))
			num = num * 10 + (int)*s - 48;
		else
			return (-1);
		s++;
	}
	return (num);
}

int main(int argc, char **argv)
{
	int i, sum = 0;
   
	for (i = 1; i < argc; i++)
	{
		if(mapToInt(argv[i]) == -1)
		{
			printf("Error\n");
            return (1);
        }
        sum += mapToInt(argv[i]);
    }
    printf("%i\n",sum);

    return (0);
}

#include "holberton.h"

/**
*_strcat-concatenates two strings
*@dest:1st parameter
*@src:2nd parameter
*Return: pointer to dest
*/

char *_strcat(char *dest, char *src)
{
int i;
int j;

for (i = 0; dest[i] != '\0'; i++)
{
}

j = 0;
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}

dest[i] = '\0';
return (dest);

}

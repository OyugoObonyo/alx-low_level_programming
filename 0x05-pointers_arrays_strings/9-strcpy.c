#include "holberton.h"

/**
 *_strcpy-copies string from pointer src to  dest
 *@dest:1st parameter
 *@src:2nd parameter
 * Return:pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
int i;

i = 0;
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
*(dest + i) = '\0';
return (dest);
}

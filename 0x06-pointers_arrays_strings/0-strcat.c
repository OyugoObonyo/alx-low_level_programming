/**
*_strcat-concatenates two strings
*@dest:1st parameter
*@src:2nd parameter
*Return: pointer to dest
*/

char *_strcat(char *dest, char *src)
{
int a;
int b;

while (dest[a] != '\0')
{
a++;
}
while (src[b] != '\0')
{
dest[a] = src[b];
b++;
a++;
}
dest[a] = '\0';

return (dest);
}

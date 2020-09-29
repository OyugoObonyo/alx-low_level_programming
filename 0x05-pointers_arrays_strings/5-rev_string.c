#include "holberton.h"

/**
 * rev_string-reverses a string
 * @s:parameter
 *
 * Return:void
 */

void rev_string(char *s)
{
int f, b, temp;

f = 0;

while (s[f] != '\0')
{
f++;
}
f--;
for (b = 0; f > b; b++, f--)
{
temp = s[f];
s[f] = s[b];
s[b] = temp;
}
}

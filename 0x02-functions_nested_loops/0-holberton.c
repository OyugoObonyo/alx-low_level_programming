#include "holberton.h"

/**
 * main - Printing the word Holberton
 *
 * Return: Always 0 (success)
 */

int main(void)
{
char *school_name = "Holberton";
int letters = 0;

for (letters = 0; letters <= 8; letters++)
{
_putchar(school_name[letters]);
}
_putchar('\n');

return (0);
}

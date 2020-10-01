#include "holberton.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: parameter
 * @n: number of elements in array
 * Return: void
 */
void reverse_array(int *a, int n)
{
int start;
int end;
int temp;

for (start = 0; start < n; start++)
{
}

start = 0;
end = n - 1;

while (start < end)
{
temp = a[start];
a[start] = a[end];
a[end] = temp;

start++;
end--;
}
}

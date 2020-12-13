#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - Prints a doubly linked list in order
 * @h: The head of the list
 *
 * Return: The number of nodes in the doubly linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *node = h;

	for (; node; node = node->next, ++count)
	{
		printf("%d\n", node->n);
	}

	return (count);
}

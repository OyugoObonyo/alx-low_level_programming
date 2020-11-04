#include "lists.h"
#include <stdio.h>

/**
 *print_listint - prints data of a linked list
 *@h: head of the list
 *Return: number of nodes of a linked list
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}

	return (nodes);
}

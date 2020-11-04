#include "lists.h"

/**
 *listint_len - returns length of a linked list
 *@h: head of the list
 *Return: the number of elements of a linked list
 */

size_t listint_len(const listint_t *h)
{
	int nodes = 0;

	while (h)
	{
		nodes++;

		h = h->next;
	}

	return (nodes);
}

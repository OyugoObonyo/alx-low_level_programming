#include "lists.h"

/**
 * dlistint_len - Prints a doubly linked list in order
 * @h: The head of the list
 *
 * Return: The number of nodes in the doubly linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *node = h;

	for (; node; node = node->next, ++count)
		;

	return (count);
}

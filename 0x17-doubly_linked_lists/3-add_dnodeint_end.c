#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - Adds a doubly-linked node to the end of a doubly-linked
 * list
 * @head: Pointer to a pointer which points to the first node
 * @n: The value for the new node to have
 *
 * Return: Address of the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode;
	dlistint_t *node;

	if (head == NULL)
		return (NULL);

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		newnode->prev = NULL;
		*head = newnode;
		return (newnode);
	}

	for (node = *head; node->next; node = node->next)
		;

	node->next = newnode;
	newnode->prev = node;

	return (newnode);
}

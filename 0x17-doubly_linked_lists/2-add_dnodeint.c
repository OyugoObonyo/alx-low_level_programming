#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - Adds a doubly-linked node to the beginning of a doubly-
 * linked list
 * @head: Pointer to a pointer which points to the first node
 * @n: The value for the node to hold
 *
 * Return: The address of the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	if (head == NULL)
		return (NULL);

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = *head;

	if (newnode->next != NULL)
		newnode->next->prev = newnode;

	*head = newnode;

	return (newnode);
}

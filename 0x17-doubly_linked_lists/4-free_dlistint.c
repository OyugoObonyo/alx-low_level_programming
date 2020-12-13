#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - Frees a doubly-linked list
 * @head: Address of the first node in the list
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;

	while (head->next != NULL)
	{
		head = head->next;
		free(head->prev);
	}

	free(head);
}

#include "lists.h"

/**
 * get_dnodeint_at_index - Gets a node at a given index
 * @head: Address of the first node
 * @index: Index of the desired node
 *
 * Return: Address of the node at the given index, or NULL if it does not
 * exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int on_index;

	for (on_index = 0; head != NULL; ++on_index, head = head->next)
	{
		if (on_index == index)
			return (head);
	}

	return (NULL);
}

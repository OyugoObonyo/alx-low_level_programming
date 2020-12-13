#include "lists.h"

/**
 * sum_dlistint - Adds the value of all of the nodes in a doubly-linked list
 * @head: Address of the first node in the list
 *
 * Return: The sum of all values
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	for (; head != NULL; head = head->next)
		sum += head->n;

	return (sum);
}

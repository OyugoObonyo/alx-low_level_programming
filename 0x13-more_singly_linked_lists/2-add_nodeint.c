#include "lists.h"

/**
 *add_nodeint - adds node at head of a list
 *@head: 1st node
 *@n: 2nd parameter
 *Return: new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}

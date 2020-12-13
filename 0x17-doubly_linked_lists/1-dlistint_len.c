#include "lists.h"
/**
 * dlistint_len - return length of LL
 * @h: Head of the LL
 * Return: Length of LL
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}

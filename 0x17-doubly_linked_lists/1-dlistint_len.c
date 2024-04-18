#include "lists.h"
/**
 * dlistint_len - Function that returns the number of elements in
 * a doubly linked list.
 * @h: Head of the list.
 * Return: The number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (count);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}

#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node of a list
 * @head: head of list
 * @index: index of node
 * Return: Index of node in list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;

	if (head == NULL)
		return (NULL);
	for (x = 0; x < index; x++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}

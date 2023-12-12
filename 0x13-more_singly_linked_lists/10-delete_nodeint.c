#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes node at index
 * @head: head of list
 * @index: index of node to be deleted
 * Return: 1 on success or -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *present, *incoming;
	unsigned int x;

	if (!head || !*head)
		return (-1);
	present = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(present);
		return (1);
	}
	for (x = 0; x < (index - 1); x++)
	{
		present = present->next;
		if (present == NULL)
			return (-1);
	}
	incoming = present->next;
	present->next = incoming->next;
	free(incoming);
	return (1);
}

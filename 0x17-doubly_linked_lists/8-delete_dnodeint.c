#include "lists.h"
/**
 * delete_dnodeint_at_index - unction that deletes the node at
 * index index of a dlistint_t linked list.
 * @head: Head of the list.
 * @index: Position of node to be deleted.
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *previous;
	dlistint_t *current = *head;
	unsigned int i = 0;

	if (current != NULL)
		while (current->prev != NULL)
			current = current->prev;
	while (current != NULL)
	{
		if (index == i)
		{
			if (index == 0)
			{
				*head = current->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				previous->next = current->next;
				if (current->next != NULL)
					current->next->prev = previous;
			}
			free(current);
			return (1);
		}
		previous = current;
		current = current->next;
		i++;
	}
	return (-1);
}

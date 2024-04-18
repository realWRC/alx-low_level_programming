#include "lists.h"
/**
 * add_dnodeint_end - Function that add a node at the end of a
 * doubly linked list.
 * @head: Head of the list.
 * @n: Node data.
 * Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr;
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;
	ptr = *head;
	if (ptr != NULL)
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = temp;
	}
	else
		*head = temp;
	temp->prev = ptr;
	return (temp);
}

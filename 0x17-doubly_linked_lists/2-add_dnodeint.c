#include "lists.h"
/**
 * add_dnodeint - Function that adds a new node at the beginning
 * of a dlistint_t list.
 * @head: Head of the list.
 * @n: Node data.
 * Return: The address of new node on succes and NULL on failure.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;
	dlistint_t *ptr;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->prev = NULL;
	ptr = *head;
	if (ptr != NULL)
	{
		while (ptr->prev != NULL)
			ptr = ptr->prev;
	}
	temp->next = ptr;
	if (ptr != NULL)
		ptr->prev = temp;
	*head = temp;
	return (temp);
}

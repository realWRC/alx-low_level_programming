#include "lists.h"
/**
 * get_dnodeint_at_index - Function that returns the nth node of
 * a dlistint_t linked list.
 * @head: Head of the list.
 * @index: Index of head to be returned.
 * Return: Address of node at index.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int numb = 0;

	if (head == NULL)
		return (NULL);
	temp = head;
	while (temp != NULL)
	{
		if (index == numb)
			return (temp);
		temp = temp->next;
		numb++;
	}
	return (NULL);
}

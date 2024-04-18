#include "lists.h"
/**
 * sum_dlistint - Function that sums data in a doubly linked list.
 * @head: Head of the list.
 * Return: The sum of data in the linked list.
 */
int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
		while (head != NULL)
		{
			total += head->n;
			head = head->next;
		}
	}
	return (total);
}

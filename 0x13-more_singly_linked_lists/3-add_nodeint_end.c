#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - function that adds node at the end of list
 * @head: head of list
 * @n: pointer to next node
 * Return: address of new node on succes or NULL on failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *pointer;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;
	if (*head == NULL)
		*head = temp;
	else
	{
		pointer = *head;
		while (pointer->next != NULL)
			pointer = pointer->next;
		pointer->next = temp;
	}
	return (temp);
}

#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list
 * @head: head of list
 */
void free_listint2(listint_t **head)
{
	listint_t *tempo;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		tempo = (*head)->next;
		free(*head);
		*head = tempo;
	}
}

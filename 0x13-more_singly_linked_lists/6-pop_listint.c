#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - function that deletes the head node of list
 * @head: head of list
 * Return: the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *tempo;
	int info;

	if (*head == NULL)
		return (0);
	tempo = *head;
	*head = (*head)->next;
	info = tempo->n;
	free(tempo);
	return (info);
}

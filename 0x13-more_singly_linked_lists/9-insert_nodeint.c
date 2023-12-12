#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts a new node at a
 * given position
 * @head: head of list
 * @idx: index where node is to be placed
 * @n: data for the node
 * Return: the address of the new node or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tempo, *newnode;
	unsigned int x = 0;

	if (*head == NULL && idx != 0)
		return (NULL);
	if (idx != 0)
	{
	tempo = *head;
	for (; x < idx - 1 && tempo != NULL; x++)
		tempo = tempo->next;
	if (tempo == NULL)
		return (NULL);
	}
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	newnode->next = tempo->next;
	tempo->next = newnode;
	return (newnode);
}

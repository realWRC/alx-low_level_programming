#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - function that adds a new node at the beginning
 * @head: head of current list
 * @n: pointer to next node
 * Return: the address of the new element on success or NULL if
 * failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}

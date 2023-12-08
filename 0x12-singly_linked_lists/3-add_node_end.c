#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - function that adds a new node at the end
 * of a list_t list
 * @head: head of list
 * @str: Data to write to node
 * Return: the address of the new element on success
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *cpy;
	int length;
	list_t *newnode, *lastnode;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	cpy = strdup(str);
	if (str == NULL)
	{
		free(newnode);
		return (NULL);
	}
	for (length = 0; str[length];)
		length++;
	newnode->str = cpy;
	newnode->len = length;
	newnode->next = NULL;
	if (*head == NULL)
		*head = newnode;
	else
	{
		lastnode = *head;
		while (lastnode->next != NULL)
			lastnode = lastnode->next;
		lastnode->next = newnode;
	}
	return (*head);
}

#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - function that adds a new node at the beginning
 * of a list_t list
 * @head: pointer to the head
 * @str: data to be added
 * Return: new element address on success
 */
list_t *add_node(list_t **head, const char *str)
{
	char *cpy;
	int length;
	list_t *newnode;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	cpy = strdup(str);
	if (cpy == NULL)
	{
		free(newnode);
		return (NULL);
	}
	for (length = 0; str[length];)
		length++;
	newnode->str = cpy;
	newnode->len = length;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}

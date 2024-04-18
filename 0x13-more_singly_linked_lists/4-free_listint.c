#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - function that frees memory allocated to a list
 * @head: head of the list
 */
void free_listint(listint_t *head)
{
	listint_t *pointer;

	for (; head != NULL;)
	{
		pointer = head;
		head = head->next;
		free(pointer);
	}
}

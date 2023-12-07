#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints a linked list
 * @h: pointer to struct list_t
 * Return: Number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	int number = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nill)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		number++;
		h = h->next;
	}
	return (number);
}

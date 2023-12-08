#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints a linked list
 * @h: pointer to struct list_t
 * Return: Number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	if (h)
	{
		if (h->str)
		{
			printf("[%d] %s%s\n", h->len, h->str);
		}
		else
		{
			printf("[%d] %s%s\n", 0, "(nil)");
		}
		if (h->next)
		{
			return (1 + print_list(h->next));
		}
		return (1);
	}
	return (0);
}

#include <stdio.h>
#include "lists.h"
/**
 * list_len - function that returns the number of elements in a
 * linked list_t list
 * @h: poimter to list_h
 * Return: number of elements in linked list_t list
 */
size_t list_len(const list_t *h)
{
	size_t number = 0;

	while (h)
	{
		number++;
		h = h->next;
	}
	return (number);
}

#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - function that returns the sum of all the data in a
 * linked list
 * @head: head of the list
 * Return: sum of all data(n) in linked list
 */
int sum_listint(listint_t *head)
{
	int total = 0;

	while (head)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}

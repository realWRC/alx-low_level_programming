#include "lists.h"
/**
 * insert_dnodeint_at_index - Function that inserts a new node
 * at a given position.
 * @h: Head of the list.
 * @idx: Position where the node will be inserted.
 * @n: Data to be added to the node.
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp;
	dlistint_t *ptr;
	unsigned int i = 1;

	if (idx == 0)
		temp = add_dnodeint(h, n);
	else
	{
		ptr = *h;
		if (ptr != NULL)
		{
			while (ptr->prev != NULL)
				ptr = ptr->prev;
		}
		while (ptr != NULL)
		{
			if (idx == i)
			{
				if (ptr->next == NULL)
					temp = add_dnodeint_end(h, n);
				else
				{
					temp = malloc(sizeof(dlistint_t));
					if (temp == NULL)
						return (NULL);
					temp->n = n;
					temp->next = ptr->next;
					temp->prev = ptr;
					ptr->next->prev = temp;
					ptr->next = temp;
				}
				break;
			}
			ptr = ptr->next;
			i++;
		}
	}
	return (temp);
}

#include "main.h"
/**
 * set_bit - function that sets the value of a bit to 1 at a
 * given index
 * @n: decimal number
 * @index: bit index
 * Return: modified number
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int position = 1;

	if (index > 64)
		return (-1);
	position = position << index;
	*n = (*n | position);
	return (1);
}

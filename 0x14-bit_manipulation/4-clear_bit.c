#include "main.h"
/**
 * clear_bit - function that sets the value of a bit to 0 at a
 * given index
 * @n: decimal number
 * @index: bit index
 * Return: modified number
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}

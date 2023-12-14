#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given
 * index
 * @n: decimal number
 * @index: bit index
 * Return: number at bit index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int position;

	position = (n >> index);
	if (index > 32)
		return (-1);
	return (position & 1);
}

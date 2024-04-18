#include "main.h"
/**
 * flip_bits - bit manipulation function
 * @n: decimal number
 * @m: decimal number
 * Return: number of bits need to flip to another number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;

	return (set_bit_count(result));
}
/**
 * set_bit_count - function to count set bits in an unsigned
 * long integer
 * @num: decimal number
 * Return: set bits
 */
unsigned int set_bit_count(unsigned long int num)
{
	unsigned int count = 0;

	while (num)
	{
		count += num & 1;
		num >>= 1;
	}
	return (count);
}

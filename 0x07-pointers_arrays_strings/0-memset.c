#include "main.h"

/**
 * _memset - fill memory block with a constant value
 * @s: starting address
 * @b: desired value
 * @n: number of bytes
 *
 * Return: new array
 */

char *_memset(char *s, char b, unsigned int n)
{
	int x;

	for (x = 0; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}

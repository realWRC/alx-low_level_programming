#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: where its stored
 * @src: where its copied
 * *@n: bytes
 *
 * Return: copied memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i;

	for (i = n; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}

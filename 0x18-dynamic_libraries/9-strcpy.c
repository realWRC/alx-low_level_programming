#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed
 * to by src
 * @dest: string to copy to
 * @src: string to copy from
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int x;
	int y;

	x = 0;
	y = 0;

	while (*(src + x) != '\0')
	{
		x++;
	}
	for ( ; y <= x ; y++)
	{
		dest[y] = src[y];
	}
	dest[x] = '\0';
	return (dest);
}

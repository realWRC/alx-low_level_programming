#include <stdlib.h>
/**
 * create_array - function that creates array of chars
 * @size: size of array
 * @c: Char to initialize array
 *
 * Return: Pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	p = malloc(size);

	if (p == NULL || size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}

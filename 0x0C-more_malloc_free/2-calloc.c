#include <stdlib.h>
/**
 * _calloc - function that return 2D grid of arrays
 * @nmeb: number of elements
 * @size: size of each element
 * Return: Pointer to pointer array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int i;

	p = malloc(nmemb * size);
	if (p == NULL || nmemb == 0 || size == 0)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		((char *)p)[i] = 0;
	return (p);
}

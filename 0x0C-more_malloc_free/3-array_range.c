#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - function that creates an array of integers
 * @min: starting integer
 * @max: final interger
 * Return: Pointer to array
 */

int *array_range(int min, int max)
{
	int *p;
	int i, j, numb;

	if (min > max)
		return (NULL);
	numb = max - min + 1;
	p = malloc(numb * sizeof(int));
	if (p == NULL)
		return (NULL);
	for (j = min, i = 0; j <= max; j++, i++)
		p[i] = j;
	return (p);
}

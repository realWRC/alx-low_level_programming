#include "main.h"

/**
 * reverse_array - function that reverses the integers of an array
 * @a: input array
 * @n: number of array elements
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int x, y;

	for (x = 0; x < n--; x++)
	{
		y = a[x];
		a[x] = a[n];
		a[n] = y;
	}
}

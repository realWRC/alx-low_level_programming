#include <stdio.h>
#include "main.h"

/**
 * print_array - a function that prints the elements of an
 * integer array
 * @a: name of array
 * @n: number of elements OF the array to be printed
 * Return: a and n inputs
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < (n - 1); x++)
	{
		printf("%d, ", a[x]);
	}

	if (x == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}

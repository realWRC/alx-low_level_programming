#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Entry point
 * @a: input 1
 * @size: input 2
 * Return: Always 0 (Success)
 */

void print_diagsums(int *a, int size)
{
	int x, y, i;

	x = 0;
	y = 0;

	for (i = 0; i < size; i++)
	{
		x = x + a[i * size + i];
	}
	for (i = size - 1; i >= 0; i--)
	{
		y += a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", x, y);
}

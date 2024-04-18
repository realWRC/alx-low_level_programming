#include <stdio.h>
#include "main.h"

/**
 * print_square - Prints a square using #
 * @size: The dimesions of the square
 */

void print_square(int size)
{
	int a, b;

	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size; b++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}


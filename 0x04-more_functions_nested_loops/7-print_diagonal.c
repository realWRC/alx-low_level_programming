#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - Prints diagonal line
 * @n: Number of diagonal lines
 */

void print_diagonal(int n)
{
	int i, x;

	for (i = 0; i < n; i++)
	{
		if (i >= 1)
		{
			for (x = 0; x < i; x++)
			{
				_putchar(' ');
			}
		}
		if (n >= 1)
		{
			_putchar(92);
			_putchar('\n');
		}
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}

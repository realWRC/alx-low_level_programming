#include <stdio.h>
#include "main.h"

/**
 * print_line - Prints a line
 * @n: Number of lines
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n ; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

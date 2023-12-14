#include "main.h"

/**
 * swap_int - function that swaps the values of two input integers
 * @a: integer to be swap
 * @b: integer to be swap
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}

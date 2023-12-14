#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times
 * Return: Alphabet and new line x10
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char alpha;

		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}

	_putchar('\n');

	}
}

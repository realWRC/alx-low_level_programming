#include "main.h"

/**
 * print_alphabet - Prints the Alphabet
 * Return: Alphabet and new line
 *
 * Description: This function prints the alphabet using the _putchar
 * function
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);

	_putchar('\n');
}

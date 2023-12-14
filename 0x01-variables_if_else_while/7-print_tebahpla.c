#include <stdio.h>

/**
 *main - Entry point
 *Return: Always (0) Success
 *
 *Description: This program that prints the alphabet in lowercase
 *followed by a new line starting with 'z'.
 */

int main(void)
{
	char lowercase = 'z';

	while (lowercase >= 'a')
	{
		putchar(lowercase);
		lowercase--;
	}

	putchar('\n');

	return (0);
}

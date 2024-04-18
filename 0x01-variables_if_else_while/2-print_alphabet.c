#include <stdio.h>

/**
 *main - Entry point
 *Return: Always (0) Success
 *
 *Description: This program that prints the alphabet in lowercase
 *followed by a new line.
 */

int main(void)
{
	char lowercase = 'a';

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}

	putchar('\n');

	return (0);
}

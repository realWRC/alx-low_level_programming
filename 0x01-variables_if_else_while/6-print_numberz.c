#include <stdio.h>

/**
 *main - Entry point
 *Return: Always (0) Success
 *
 *Description: This program that prints all single digit numbers of
 *base 10 starting from 0, followed by a new line.
 */

int main(void)
{
	int x = 0;

	while (x < 10)
	{
		putchar(x + '0');
		x++;
	}

	putchar('\n');

	return (0);
}

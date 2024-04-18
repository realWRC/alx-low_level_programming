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
	int i;

	for (i = 0; i < 16; i++)
	{
		if (i < 10)
		{
			putchar(i + '0');
		}
		else
		{
			putchar('a' + i - 10);
		}
	}

	putchar('\n');

	return (0);
}

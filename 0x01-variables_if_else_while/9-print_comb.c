#include <stdio.h>

/**
 *main - Entry point
 *Return: Always (0) Success
 *
 *Description: This program that prints all single digit numbers of
 *base 10 starting from 0, followed by a comma, a space and a new
 *line.
 */

int main(void)
{
	int x = 0;

	while (x < 10)
	{
		putchar('0' + x);
		if (x < 9)
		{
			putchar(',');
			putchar(' ');
		}
		else
		{
			/*Empty else statement*/
		}
		x++;
	}

	putchar('\n');

	return (0);
}

#include <stdio.h>

/**
 *main - Entry point
 *Return: Always (0) Success
 *
 *Description: This program that prints all possible different
 *combinations of two digits.
 */

int main(void)
{
	int a = 0;
	int b = 0;

	while (a < 100)
	{
		b = a + 1;
		while (b < 100)
		{
			putchar('0' + a / 10);
			putchar('0' + a % 10);
			putchar(' ');
			putchar('0' + b / 10);
			putchar('0' + b % 10);

			if (!(a == 98 && b == 99))
			{
			putchar(',');
			putchar(' ');
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}

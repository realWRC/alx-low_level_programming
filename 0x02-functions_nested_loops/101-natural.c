#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0.
 *
 * Description: This function lists all the natural numbers below
 * 1024 that are multiples of 3 or 5.
 */

int main(void)
{
	int a;
	int x = 0;

	for (a = 0; a < 1024; a++)
	{
		if ((a % 3) == 0 || (a % 5) == 0)
			x += a;
	}

	printf("%d\n", x);

	return (0);
}

#include <stdio.h>

/**
 * main - Entry point.
 * Return: Always (0) Success.
 *
 * Description: This program prints first 50 Fibonacci numbers
 * starting with 1 and separated by a comma followed by a space.
 */

int main(void)
{
	int i;
	unsigned long fbs1 = 0;
	unsigned long fbs2 = 1;
	unsigned long total;

	for (i = 0; i < 50; i++)
	{
		total = fbs1 + fbs2;
		printf("%lu", total);

		fbs1 = fbs2;
		fbs2 = total;

		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}

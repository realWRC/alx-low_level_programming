#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of 612852475143
 * Return: Always (0) Success
 */

int main(void)
{
	long int x;
	long int y;
	long int m;

	x = 612852475143;
	m = -1;

	while (x % 2 == 0)
	{
		m = 2;
		x /= 2;
	}

	for (y = 3; y <= sqrt(x); y = y + 2)
	{
		while (x % y == 0)
		{
			m = y;
			x = x / y;
		}
	}

	if (x > 2)
		m = x;

	printf("%ld\n", m);

	return (0);
}

#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 *
 * Description: This program finds and prints the sum of the even numbers
 * followed by a new line
 */
int main(void)
{
	int x;
	unsigned long int a;
	unsigned long int b;
	unsigned long int c;
	unsigned long int t;

	a = 1;
	b = 2;
	t = 0;

	for (x = 1; x <= 33; ++x)
	{
		if (a < 4000000 && (a % 2) == 0)
		{
			t = t + a;
		}
		c = a + b;
		a = b;
		b = c;
	}

	printf("%lu\n", t);

	return (0);
}

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: Always (0) Success
 *
 * Descriptioon: This program generates a random password for
 * the program 101-crackme
 */

int main(void)
{
	int count, total, x;
	int pwrd[100];

	total = 0;
	srand(time(NULL));

	for (count = 0; count < 100; count++)
	{
		pwrd[count] = rand() % 78;
		total += (pwrd[count] + '0');
		putchar(pwrd[count] + '0');
		if ((2772 - total) - '0' < 78)
		{
			x = 2772 - total - '0';
			total += x;
			putchar(x + '0');
			break;
		}
	}

	return (0);
}

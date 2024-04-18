#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the int to print the last digit from
 * Return: value of the last digit
 *
 * Description: This function is used to print the last digit
 * of a number fed to it.
 */

int print_last_digit(int n)
{
	int x;

	if (n < 0)
	{
		n = -n;
	}

	x = n % 10;

	if (x < 0)
	{
		x = -x;
	}

	_putchar(x + '0');

	return (x);
}

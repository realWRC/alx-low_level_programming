#include "main.h"

/**
 * print_sign - function that prints the sign of a number
 * @n: the int variable to be checked
 * Return: 1 and prints + if n is greater than zero, 0 and prints
 * 0 if n is zero and -1 and prints - if n is less than 0
 * -1 and prints - if n is less than zero
 *
 * Description: This function checkes the sign of the variable n
 * using the if else statements and boolean opperators.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
	}
		return (-1);
}

#include <stdio.h>

/**
 * _isdigit - Checks if character is a digit
 * @c: Character to be checked
 * Return: 1 if it's a digit and 0 if it's not
 *
 * Description: This is a function that takes a character and
 * checks if it is a digit.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

#include <stdio.h>

/**
 * _isupper - Checks if character is Uppercase
 * @c: Character to be checked
 * Return: 1 if uppercase and 0 if lovercase
 *
 * Description: This is a function that takes a character and compairs
 * checks if it is uppercase or lowercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

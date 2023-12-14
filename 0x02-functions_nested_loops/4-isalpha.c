#include "main.h"

/**
 * _isalpha - function used to check if char is lowercase
 * @c: is represents the char to be checked
 * Return: 1 if char is letter or 0 otherwise.
 *
 * Description: This program is used to check if the char is
 * a letter.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

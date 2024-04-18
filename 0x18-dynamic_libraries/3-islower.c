#include "main.h"

/**
 * _islower - function used to check if char is lowercase
 * @c: is represents the char to be checked
 * Return: 1 if char is lowercase or 0 otherwise.
 *
 * Description: This program used to check if the char is
 * fed to it is lowercase.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

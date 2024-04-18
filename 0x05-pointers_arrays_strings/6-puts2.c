#include "main.h"

/**
 * puts2 - function that prints the second of two characters
 * @str: input of function
 * Return: charachers
 */

void puts2(char *str)
{
	int length;
	int x;
	int y;
	char *z = str;

	length = 0;
	x = 0;

	while (*z != '\0')
	{
		z++;
		length++;
	}
	x = length - 1;
	for (y = 0 ; y <= x ; y++)
	{
		if (y % 2 == 0)
	{
		_putchar(str[y]);
	}
	}
	_putchar('\n');
}

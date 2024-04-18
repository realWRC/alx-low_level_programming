#include "main.h"

/**
 * _atoi - function that converts a string to an integer
 * @s: the string to be converted
 *
 * Return: the integer converted from the string
 */

int _atoi(char *s)
{
	int x = 0;
	int y = 0;
	int z = 0;
	int length = 0;
	int a = 0;
	int numb = 0;

	while (s[length] != '\0')
		length++;

	while (x < length && a == 0)
	{
		if (s[x] == '-')
			++y;

		if (s[x] >= '0' && s[x] <= '9')
		{
			numb = s[x] - '0';
			if (y % 2)
				numb = -numb;
			z = z * 10 + numb;
			a = 1;
			if (s[x + 1] < '0' || s[x + 1] > '9')
				break;
			a = 0;
		}
		x++;
	}
	if (a == 0)
		return (0);
	return (z);
}

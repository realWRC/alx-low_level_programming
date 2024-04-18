#include "main.h"

/**
 * rev_string - this function reverses a string
 * @s: string to be reversed
 * Return: string in reverse
 */

void rev_string(char *s)
{
	int x;
	int y;
	char bwd = s[0];

	x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	for (y = 0; y < x; y++)
	{
		x--;
		bwd = s[y];
		s[y] = s[x];
		s[x] = bwd;
	}
}

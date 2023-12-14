#include <stdio.h>
#include "main.h"

/**
 * rot13 - function that encodes a string using rot13
 * @s: pointer to string
 *
 * Return: *s
 */

char *rot13(char *s)
{
	int x;
	int y;
	char string1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char stringroot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; y < 52; y++)
		{
			if (s[x] == string1[y])
			{
				s[x] = stringroot[y];
				break;
			}
		}
	}
	return (s);
}

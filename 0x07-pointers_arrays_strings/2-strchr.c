#include "main.h"

/**
 * _strchr - locates characher string
 * @s: input 1
 * @c: input 2
 * Return: Always 0 (Success)
 */

char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (&s[x]);
	}
	return (0);
}

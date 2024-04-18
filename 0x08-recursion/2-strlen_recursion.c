#include "main.h"

/**
  * _strlen_recursion - function
  * @s: Argument
  *
  * Return: Always (0) Success
  */

int _strlen_recursion(char *s)
{
	int x = 0;

	if (*s)
	{
		x++;
		x += _strlen_recursion(s + 1);
	}
	return (x);
}

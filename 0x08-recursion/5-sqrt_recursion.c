#include "main.h"

int real_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - function that returns the natural square
 * @n: arrgument
 *
 * Return: Always (0) Success
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (real_sqrt_recursion(n, 0));
}

/**
 * real_sqrt_recursion - function that recurses to find
 * the natural square root of a number
 * @n: number to find root of
 * @i: iterator argument
 *
 * Return: Always (0) Success
 */

int real_sqrt_recursion(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (real_sqrt_recursion(n, i + 1));
}

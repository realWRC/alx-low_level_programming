#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - function that add numbers
 * @n: Number of argument
 * Return: Sum of arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list argl;

	sum = 0;
	if (n == 0)
		return (0);
	va_start(argl, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(argl, int);
	}
	va_end(argl);
	return (sum);
}

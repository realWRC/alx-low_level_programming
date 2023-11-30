#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - function that prints numbers
 * @separator: separation string
 * @n: number of integers to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list argl;

	va_start(argl, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(argl, int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(argl);
	printf("\n");
}

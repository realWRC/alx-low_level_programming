#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - function that prints numbers
 * @separator: separation string
 * @n: number of strings to be printed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list argl;
	char *string;
	int *ptr = NULL;

	va_start(argl, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(argl, char*);
		if (string  == NULL)
			printf("%p", (void *)ptr);
		else
			printf("%s", string);
		if (separator !=  NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(argl);
	printf("\n");
}

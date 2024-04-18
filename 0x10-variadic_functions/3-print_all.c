#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - function that prints various data types
 * @format: format specifier for data type
 */
void print_all(const char * const format, ...)
{
	va_list argl;
	char *string, *separator = "";
	int j = 0;

	va_start(argl, format);
	if (format)
	{
		while (format[j])
		{
			switch (format[j])
			{
				case 'c':
					printf("%s%c", separator, va_arg(argl, int));
					break;
				case 'i':
					printf("%s%i", separator, va_arg(argl, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(argl, double));
					break;
				case 's':
					string = va_arg(argl, char*);
					if (!string)
						string = "(nil)";
					printf("%s%s", separator, string);
					break;
				default:
					j++;
					continue;
			}
			separator = ", ";
			j++;
		}
	}
	printf("\n");
	va_end(argl);
}

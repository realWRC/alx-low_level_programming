#include "function_pointers.h"
/**
 * print_name - function that prints a name
 * @name: name argument
 * @f: function pointer to alter name
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == print_name_as_is)
	{
		f(name);
		return;
	}
	if (f == print_name_uppercase)
	{
		f(name);
		return;
	}
}

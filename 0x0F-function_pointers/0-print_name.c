/**
 * print_name - function that prints a name
 * @name: name argument
 * @f: function pointer to alter name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

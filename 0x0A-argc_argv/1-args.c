#include <stdio.h>

/**
 * main - prints program name
 * @argc: argument count
 * @argv: arguments
 * Return: Always (0)
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);

	return (0);
}

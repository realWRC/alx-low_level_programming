#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - Entry point of program
 * @argc: argument count
 * @argv: arguments
 * Return: O on success
 */
int main(int argc, char *argv[])
{
	int (*operation)(int, int);

	if (argc > 4)
	{
		printf("Error\n");
		exit(98);
	}
	operation = get_op_func(argv[2]);
	if (!operation)
	{
		printf("Error\n");
		exit(99);
	}
	return (operation(atoi(argv[1]), atoi(argv[3])));
}

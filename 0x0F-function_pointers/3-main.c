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

	if (argc > 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argc == 4)
	{
		(get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));
	}
	if (argc < 4)
	{
		printf("Error\n");
		exit(101);
	}
	return (0);
}

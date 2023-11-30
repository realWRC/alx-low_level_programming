#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
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

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (!(isdigit(*argv[1]))  || !(isdigit(*argv[3])))
	{
		printf("Error\n");
		exit(101);
	}
	operation = (get_op_func(argv[2]));
	if (!operation || strlen(argv[2]) != 1)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", operation(atoi(argv[1]), atoi(argv[3])));
	return (0);
}

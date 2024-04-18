#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints program name
 * @argc: argument count
 * @argv: arguments
 * Return: Always (0)
 */

int main(int argc, char *argv[])
{
	(void)argc;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		long int i = atoi(argv[1]) * atoi(argv[2]);

		printf("%li\n", i);
		return (0);
	}

}

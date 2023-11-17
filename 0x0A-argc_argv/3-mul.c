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
	long int i = atoi(argv[1]) * atoi(argv[2]);
	(void)argc;

	if (argc < 3)
	{
		printf("Error");
		return (1);
	}
	else
	{
		printf("%li\n", i);
		return (0);
	}

}

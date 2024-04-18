#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints program name
 * @argc: argument count
 * @argv: arguments
 * Return: Always (0)
 */

int main(int argc, char **argv)
{
	int i, x, total;
	char *check;

	i = x = total = 0;

	if (argc < 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; argv[i]; i++)
	{
		x = strtol(argv[i], &check, 10);
		if (*check)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			total = total + x;
		}
	}
	printf("%i\n", total);
	return (0);
}

#include "main.h"
/**
 * _error - function that checks if files can be opened
 * @source: argument
 * @destin: argument
 * @argv: argument
 */
void _error(int source, int destin, char *argv[])
{
	if (source == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (destin == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
/**
 * main - Entry point of program
 * @argc: argument count
 * @argv: argument list
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int source, destin, error_close;
	ssize_t num_chars, num_words;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp source destin");
		exit(97);
	}
	source = open(argv[1], O_RDONLY);
	destin = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	_error(source, destin, argv);
	num_chars = 1024;
	while (num_chars == 1024)
	{
		num_chars = read(source, buffer, 1024);
		if (num_chars == -1)
			_error(-1, 0, argv);
		num_words = write(destin, buffer, num_chars);
		if (num_words == -1)
			_error(0, -1, argv);
	}
	error_close = close(source);
	if (error_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", source);
		exit(100);
	}
	error_close = close(destin);
	if (error_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", source);
		exit(100);
	}
	return (0);
}

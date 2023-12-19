#include "main.h"
/**
 * read_textfile - function that reads from a text file
 * @filename: argument
 * @letters: argument
 * Return: reads a text file
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	size_t _read, _write;

	if (filename == NULL || letters < 1)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);
	_read = read(fd, buffer, letters);
	if (_read < 1)
		return (0);
	_write = write(STDOUT_FILENO, buffer, _read);
	if (_write < 1)
		return (0);
	free(buffer);
	close(fd);
	return (_write);
}

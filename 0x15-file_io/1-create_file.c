#include "main.h"
/**
 * create_file - function that creates a file
 * @filename: argument
 * @text_content: content
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, length, _write;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	for (length = 0; text_content[length] != '\0'; length++)
		;
	_write = write(fd, text_content, length);
	if (_write < 1)
		return (-1);
	close(fd);
	return (1);
}

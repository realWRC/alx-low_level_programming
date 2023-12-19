#include "main.h"
/**
 * append_text_to_file - function that appends text to a file
 * @filename: argument
 * @text_content: text
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, length, _write;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND | O_WRONLY);
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

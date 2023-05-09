#include "main.h"

/**
 * create_file - creates a file.
 * @filename: The name of the file
 * @text_content: content to write to the file
 * Return: 1(success) -1(error)
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t wr;
	size_t len;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (fd == -1)
		return (-1);

	len = 0;
	if (text_content)
	{
		while (text_content[len])
			len++;
	}

	wr = write(fd, text_content, len);
	if (wr == -1)
		return (-1);

	close(fd);

	return (1);
}
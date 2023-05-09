#include "main.h"
#include <string.h>

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

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (fd == -1)
		return (-1);

	wr = write(fd, text_content, strlen(text_content));
	if (wr == -1)
		return (-1);

	close(fd);

	return (1);
}

#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: text content of the file
 * Return: 1(sucess) -1(error)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t wr;
	size_t len;

	if (!filename)
		return (-1);

	fd = open(filename, O_APPEND | O_WRONLY);
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

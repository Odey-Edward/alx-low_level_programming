#include "main.h"

/**
* append_text_to_file - append text to end of file
* @filename: the name of the file
* @text_content: the text to add at the end of the file
* Return: 1 on success and -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (; text_content[len];)
			len++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);

	w = write(fd, text_content, len);
	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}

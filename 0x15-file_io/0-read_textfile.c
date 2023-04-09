#include "main.h"
#include <stdlib.h>

/**
* read_textfile - reads a text file and prints it to the POSIX standard output.
* @filename: the file to read from
* @letters: letters is the number of letters it should read and print
* Return: the actual number of letters it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t f, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	f = open(filename, O_RDONLY);
	r = read(f, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (f == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(f);

	return (w);
}

#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the file to process
 * @letters: number of character to read and write
 * Return: number of characters read else 0;
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t rd, wr;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);

	rd = read(fd, buf, letters);
	if (rd == -1)
		return (0);

	wr = write(STDOUT_FILENO, buf, rd);

	free(buf);
	close(fd);

	return (wr);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* error_check - check for error
* @fd: file to read from
* @fd2: file to write to
* @av: argument vector
*/
void error_check(int fd, int fd2, char **av)
{
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
}
/**
* main - program start from
* @ac: argument count
* @av: argument vector
* Return: always 0 (success)
*/
int main(int ac, char **av)
{
	int fd, fd2;
	ssize_t w, r, c;
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd = open(av[1], O_RDONLY);
	fd2 = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	error_check(fd, fd2, av);

	r = 1024;
	while (r > 0)
	{
		r = read(fd, buffer, 1024);
		w = write(fd2, buffer, r);
		error_check(r, w, av);
	}
	c = close(fd2);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	c = close(fd);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
return (0);
}

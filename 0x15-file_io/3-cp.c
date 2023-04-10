#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - program start from
* @ac: argument count
* @av: argument vector
* Return: always 0 (success)
*/
int main(int ac, char **av)
{
	int fd, fd2, c, w, r, c2;
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(98);
	}

	fd = open(av[1], O_RDONLY);
	r = read(fd, buffer, 1024);
	if (fd == -1 || r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd2 = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	w = write(fd2, buffer, r);
	if (fd2 == -1 || w == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	c2 = close(fd2);
	if (c2 == -1)
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
free(buffer);
return (0);
}

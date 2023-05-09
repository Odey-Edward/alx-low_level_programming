#include "main.h"

/**
 * process_file - It process a file (By reading from a file discriptor
 * and writing to a file discriptor
 * @fd1: file discriptor to read from
 * @fd2: file discriptor to write to
 * @av: argument vector
 */
void process_file(int fd1, int fd2, char *av[])
{
	ssize_t wr, rd;
	char buffer[1024];

	do {
		rd = read(fd1, buffer, 1024);
		if (rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		wr = write(fd2, buffer, rd);
		if (wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	} while (rd != 0);
}
/**
 * main - the program entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int cl1, cl2, fd1, fd2;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	process_file(fd1, fd2, argv);

	cl1 = close(fd2);
	if (cl1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", cl1);
		exit(100);
	}

	cl2 = close(fd1);
	if (cl2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", cl2);
		exit(100);
	}
	return (0);
}

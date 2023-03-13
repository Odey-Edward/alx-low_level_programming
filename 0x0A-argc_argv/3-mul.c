#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
* @argc: argument count
* @argv: argument vector
* Return: 0 (success) else 1
*/
int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}

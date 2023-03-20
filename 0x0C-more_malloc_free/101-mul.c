#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
* main - multiply two numbers
* @argc: argument count
* @argv: argument vector
* Return: always 0 (success)
*/
int main(int argc, char *argv[])
{
	int i, j;
	unsigned long mul;
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	else if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j]; j++)
			{
				if (isdigit(argv[i][j]))
				{
					continue;
				}
				else
				{
					printf("Error\n");
					exit(98);
				}
			}
			mul = num1 * num2;
		}
		printf("%lu\n", mul);
}
	return (0);
}

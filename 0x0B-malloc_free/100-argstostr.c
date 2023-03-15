#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* argstostr - concatenate string
* @ac: argument count
* @av: argument vector
* Return: av (string)
*/
char *argstostr(int ac, char **av)
{
	int i;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
for (i = 0; i < ac; i++)
{
	printf("%s\n", av[i]);
}
return (*av);
}

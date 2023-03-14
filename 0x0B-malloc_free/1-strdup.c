#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
* _strdup - duplicate string
* @str: Actual string
* Return: duplicate
*/
char *_strdup(char *str)
{
	char *duplicate;
	int i, len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
	{
		len++;
	}

	duplicate = malloc(sizeof(char) * (len + 1));

	if (duplicate == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; str[i]; i++)
		{
			duplicate[i] = str[i];
		}
		duplicate[len] = '\0';
	}
	free(duplicate);
	return (duplicate);
}

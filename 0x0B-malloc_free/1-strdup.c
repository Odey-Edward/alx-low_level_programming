#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _strdup - duplicate string
* @str: Actual string
* Return: duplicate
*/
char *_strdup(char *str)
{
	char *duplicate;
	int i, len = strlen(str) + 1;

	if (str == NULL)
	{
		return (NULL);
	}

	duplicate = malloc(sizeof(char) * len);

	if (duplicate == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < len; i++)
		{
			duplicate[i] = str[i];
		}
		duplicate[i] = '\0';
	}
	return (duplicate);
	free(duplicate);
}

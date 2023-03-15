#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
* str_concat - concantenate two string
* @s1: destination string
* @s2: source string
* Return: s1 else NULL
*/
char *str_concat(char *s1, char *s2)
{
	int i, len1, len2;
	char *result;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	if (s1 == NULL)
	{
		return (s2);
	}
	if (s2 == NULL)
	{
		return (s1);
	}

	len1 = strlen(s1);
	len2 = strlen(s2);

	result = malloc(sizeof(char) * (len1 + len2 + 1));

	if (result == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; s1[i]; i++)
		{
			result[i] = s1[i];
		}
		for (i = 0; s2[i]; i++, len1++)
		{
			result[len1] = s2[i];
		}
		result[len1] = '\0';
	}
	return (result);
}

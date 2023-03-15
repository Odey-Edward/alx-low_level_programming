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
	int i, j = 0, len1, len2;
	char *result;

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	result = malloc(sizeof(char) * (len1 + len2 + 1));

	if (result == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; s1[i]; i++)
		{
			result[j++] = s1[i];
		}
		for (i = 0; s2[i]; i++)
		{
			result[j++] = s2[i];
		}
		result[j] = '\0';
	}
	return (result);
}

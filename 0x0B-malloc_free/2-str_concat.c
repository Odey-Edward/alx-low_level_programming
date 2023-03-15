#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* str_concat - concantenate two string
* @s1: destination string
* @s2: source string
* Return: s1 else NULL
*/
char *str_concat(char *s1, char *s2)
{
	int i, len1, len2;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; s2[i]; i++)
		{
			len2++;
		}

		s1 = malloc(sizeof(char) * (len2 + 1));
		if (s1 == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; s1[i]; i++)
			{
				len1++;
			}
			for (i = 0; s2[i]; i++, len1++)
			{
				s1[len1] = s2[i];
			}
			s1[len1] = '\0';
		}
		return (s1);
	}
}

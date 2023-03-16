#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
* full_concat - concatenate all string
* @str1: string 1
* @str2: string 2
* Return: pointer
*/
char *full_concat(char *str1, char *str2)
{
	char *str;
	int i, j = 0, len1, len2;

	len1 = strlen(str1);
	len2 = strlen(str2);

	str = malloc(sizeof(char) * (len1 + len2) + 1);
	if (str == NULL)
		return (NULL);

	for (i = 0; str1[i]; i++, j++)
		str[j] = str1[i];

	for (i = 0; str2[i]; i++, j++)
		str[j] = str2[i];

	str[j] = '\0';
	return (str);
}

/**
* patial_concat - concatenate partially
* @str1: string 1
* @str2: string 2
* @size: size of str2
* Return: pointer
*/
char *patial_concat(char *str1, char *str2, unsigned int size)
{
	char *str;
	int i, j = 0, len1;

	len1 = strlen(str1);

	str = malloc(sizeof(char) * (len1 + size) + 1);
	if (str == NULL)
		return (NULL);

	for (i = 0; str1[i]; i++, j++)
		str[j] = str1[i];

	for (i = 0; i < size; i++, j++)
		str[j] = str2[i];

	str[j] = '\0';
	return (str);
}

/**
* string_nconcat - concatenates two strings
* @s1: string 1
* @s2: string 2
* @n: patial size of s2
* Return: pointer
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int len2;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len2 = strlen(s2);

	if (n >= len2)
	{
		ptr = full_concat(s1, s2);
		return (ptr);
	}
	else
	{
		ptr = patial_concat(s1, s2, n);
		return (ptr);
	}
}

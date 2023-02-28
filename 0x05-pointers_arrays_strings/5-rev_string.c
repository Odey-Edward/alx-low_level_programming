#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * rev_string - Reverses a string
 * @s: Pointer to the string
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int len = strlen(s);
	char *start = s;
	char *end = s + len - 1;
	char temp;

	while (start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;

		start++;
		end--;
	}
}


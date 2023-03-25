#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
#include <string.h>

/**
* print_char - print a character
* @pl: parameter list
*/
void print_char(va_list pl)
{
	printf("%c", va_arg(pl, int));
}

/**
* print_float - print a floating point
* @pl: parameter list
*/
void print_float(va_list pl)
{
	printf("%f", va_arg(pl, double));
}

/**
* print_int - print integer
* @pl: parameter list
*/
void print_int(va_list pl)
{
	printf("%d", va_arg(pl, int));
}

/**
* print_str - print string
* @pl: parameter list
*/
void print_str(va_list pl)
{
	if (va_arg(pl, char *) != NULL)
	{
		printf("%s", va_arg(pl, char *));
	}
	else
	{
		printf("(nil)");
	}
}

/**
* print_all -  prints anything
* @format: list of types of arguments passed to the function
*/
void print_all(const char * const format, ...)
{
	va_list pl;
	int i, j, len;
	char *separator = ", ";

	print_t arg[] = {
			{"c", print_char},
			{"i", print_int},
			{"f", print_float},
			{"s", print_str},
			{NULL, NULL}
	};

	va_start(pl, format);

	len = strlen(format);

	i = 0;
	while (i < len)
	{
		j = 0;
		while (arg[j].symbol)
		{
			if (*(arg[j].symbol) == format[i])
			{
				arg[j].print(pl);
				printf("%s", separator);
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(pl);
}

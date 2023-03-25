#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <string.h>

/**
* print_char - print a character
* @op: argument list
*/
void print_char(va_list op)
{
	printf("%c", va_arg(op, int));
}

/**
* print_int - print integer
* @op: argument list
*/
void print_int(va_list op)
{
	printf("%d", va_arg(op, int));
}

/**
* print_str - print string
* @op: argument list
*/
void print_str(va_list op)
{
	if (va_arg(op, char *) != NULL)
	{
		printf("%s", va_arg(op, char *));
	}
	else
	{
		printf("(nil)");
	}
}

/**
* print_float - print float
* @op: argment list
*/
void print_float(va_list op)
{
	printf("%f", va_arg(op, double));
}

/**
* print_all - prints anything
* @format: a list of types of arguments passed to the function
*/
void print_all(const char * const format, ...)
{
	va_list op;
	int i, len, j;
	char *separator = ", ";

	printer_t args[] = {

			{"c", print_char},
			{"i", print_int},
			{"f", print_float},
			{"s", print_str},
			{NULL, NULL}
	};
        va_start(op, format);
	len = strlen(format);

	i = 0;
	while (i < len)
	{
		j = 0;
		while (args[j].symbol)
		{
			if (*(args[i].symbol) == format[j])
			{
				args[i].print(op);
				printf("%s", separator);
			}
			j++;
		}
		i++;
	}
	va_end(op);
	printf("\n");
}

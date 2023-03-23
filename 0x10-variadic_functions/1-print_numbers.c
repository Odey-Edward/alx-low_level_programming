#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
* print_numbers - prints numbers, followed by a new line.
* @separator: the string to be printed between numbers
* @n: the number of integers passed to the function
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));

		if (separator != NULL)
			printf("%s ", separator);
	}
	printf("\n");
	va_end(ap);
}

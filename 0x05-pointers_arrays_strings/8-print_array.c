#include <stdio.h>
#include "main.h"

/**
* print_array - print each array element
*
* @a: pointer reference
* @n: parameter for array index
*/
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);

		if (i != (n - 1))
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}

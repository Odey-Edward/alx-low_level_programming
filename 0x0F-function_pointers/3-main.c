#include <stdio.h>
#include "3-calc.h"

/**
* main - Entry point
*/
int main(int argc, char *argv[])
{
	int agrv1, agrv3, agrv2;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	agrv1 = atoi(argv[1]);
	agrv3 = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	agrv2 = argv[2];

	if ((agrv2 == '/' || agrv2 == '%') && agrv3 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = get_op_func(agrv1, agrv3);
	printf("%d\n", result);

	return (0);

}

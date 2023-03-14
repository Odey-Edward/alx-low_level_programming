#include <stdlib.h>
#include <stdio.h>

/**
*
*/
int main(int argc, char *argv[])
{
	int i, sum = 0;
	int alpha = isalpha(argv);

if (argc > 1)
{
	for (i = 0; i < argc; i++)
	{
		if (alpha == 1)
		{
			sum += atoi(argv[i]);
		}
		else
		{
			break;
		}
	}
	if (alpha == 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", sum);
	}
}
else
{
	printf("%d\n", 0);
}
	return (0);
}


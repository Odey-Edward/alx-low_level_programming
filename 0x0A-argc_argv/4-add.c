#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>


/**
*
*/
int main(int argc, char *argv[])
{
	int i, len, j, sum = 0;
	char *ptrc;

if (argc > 2)
{
	for (i = 1; i < argc; i++)
	{
		ptrc = *(argv + i);
		len = strlen(ptrc);

		for (j = 0; j < len; j++)
		{
			if (isalpha(ptrc[j]))
			{
				printf("Error\n");
				return (1);
			}
		}
			sum += atoi(argv[i]);
	}
		printf("%d\n", sum);
}
else
{
	printf("%d\n", 0);
}
	return (0);
}


#include <stdio.h>

int main(void)
{
	int i = -20;
	int j;

	if (i < 0)
	{
		j = (i * i) / i;
		printf("%d\n", j);
	}
	else
	{
		printf("%d\n", i);
	}
	return 0;
}

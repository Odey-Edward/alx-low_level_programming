#include <stdio.h>

int main(void)
{
	char c;

	c = getchar();

	if (c >= 'a' || c <= 'z')
	{
		printf("%d\n", 1);
	}
	else
	{
		printf("%d\n", 0);
	}
	return 0;
}

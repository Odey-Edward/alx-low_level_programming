#include <stdio.h>

int main(void)
{

	char character;

	character = getchar();

	if (character >= 'a' && character <= 'z')
	{
		printf("%d\n", 1);
	}
	else
	{
		printf("%d\n", 0);
	}
	return (0);
}

#include <stdio.h>

/**
* main - print sizes of data type .
*
* Return: zero
*/
int main(void)
{
	printf("Size of a char: %d bytes(s)\n", sizeof(char));
	printf("Size of an int: %d bytes(s)\n", sizeof(int));
	printf("Size of long int: %d bytes(s)\n", sizeof(long int));
	printf("Size of long long int: %d bytes(s)\n", sizeof(long long int));
	printf("Size of float: %d bytes(s)\n", sizeof(float));

	return (0);
}

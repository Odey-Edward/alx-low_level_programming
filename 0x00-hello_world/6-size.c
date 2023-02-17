#include <stdio.h>

/**
* main - print sizes of data type .
*
* Return: zero
*/
int main(void)
{
	printf("Size of a char: %ld bytes(s)\n", sizeof(char));
	printf("Size of an int: %ld bytes(s)\n", sizeof(int));
	printf("Size of long int: %ld bytes(s)\n", sizeof(int));
	printf("Size of long long int: %lld bytes(s)\n", sizeof(long));
	printf("Size of float: %ld bytes(s)\n", sizeof(float));

	return (0);
}

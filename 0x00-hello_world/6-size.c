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
	printf("Size of long int: %ld bytes(s)\n", sizeof(long int));
	printf("Size of long long int: %ld bytes(s)\n", sizeof(long long int));
	printf("Size of float: %ld bytes(s)", sizeof(float));

	return (0);
}

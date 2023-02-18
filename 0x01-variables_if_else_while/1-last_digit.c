#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/**
* main - Entry point
*
* Return: 0 (sucess)
*/
int main(void)
{
	int number = 12345;

	printf("last number in %d is %d\n", number, number = number % 10);

	return (0);
}

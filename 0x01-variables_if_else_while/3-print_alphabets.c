#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
*
* Return: 0 (sucess)
*/
int main(void)
{
	char lowerCase;
	char upperCase;

	for (lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
		putchar(lowerCase);

	for (upperCase = 'A'; upperCase <= 'Z'; upperCase++)
		putchar(upperCase);

	putchar('\n');
	return (0);
}

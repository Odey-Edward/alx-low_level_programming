#include <stdio.h>

/**
* main - Entry point
* @agrc: argument count
* @agrv: argument vector
* Return: 0 always (success)
*/
int main(int agrc, char *agrv[])
{
	(void)agrc;

	printf("%s\n", agrv[0]);

	return (0);
}

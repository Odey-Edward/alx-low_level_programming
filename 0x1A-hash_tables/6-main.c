#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	char *aa = "yf", *ac = "a";

    printf("%ld\n", aa - ac);
    printf("%c\n", *(ac - 2));
    return (EXIT_SUCCESS);
}

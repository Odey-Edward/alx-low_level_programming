#include "main.h"

/**
* swap_int - swap two a & b
*
* @a: pointer
* @b: pointer
*/
void swap_int(int *a, int *b)
{
	int value = *a;

	*a = *b;
	*b = value;
}

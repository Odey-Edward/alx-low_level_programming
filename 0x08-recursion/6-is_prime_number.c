#include "main.h"

/**
* check_prime - check if number is prime
* @b: number to check (integer)
* @a: check if b is prime
* Return: 1 (if prime) else 0
*/
int check_prime(int b, int a)
{
	if (b % a == 0 && a != b)
	{
		return (0);
	}
	else if (a == b && b % a == 0)
	{
		return (1);
	}
	else
	{
		return (check_prime(b, a + 1));
	}
}

/**
* is_prime_number - check for prime numbers
* @n: actual number (integer)
* Return: 1 (if prime) else 0
*/
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (check_prime(n, 2));
	}
}

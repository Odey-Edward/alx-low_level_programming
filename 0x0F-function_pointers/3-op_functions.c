#include <stdlib.h>
#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);


/**
* op_add - sum two numbers
* @a: first number
* @b: second number
* Return: the sum
*/
int op_add(int a, int b)
{

	return (a + b);
}

/**
* op_sub - subtract a from b
* @a: first number
* @b: second number
* Return: the difference of a and b
*/
int op_sub(int a, int b)
{
	int calc;

	calc = a - b;

	return (calc);
}

/**
* op_mul - multiply two numbers
* @a: first number
* @b: second number
* Return: the product of a and b
*/
int op_mul(int a, int b)
{
	int calc;

	calc = a * b;

	return (calc);
}

/**
* op_div - divide two numbers
* @a: first number
* @b: second number
* Return: result of the division of a by b
*/
int op_div(int a, int b)
{
	int calc;

	calc = a / b;

	return (calc);
}

/**
* op_mod - finds the remainder of the division of a by b
* @a: first number
* @b: second number
* Return: the remainder of the division of a by b
*/
int op_mod(int a, int b)
{
	int calc;

	calc = a % b;

	return (calc);
}

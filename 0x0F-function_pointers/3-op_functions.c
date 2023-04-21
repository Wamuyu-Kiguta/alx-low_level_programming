#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - returns the sum of 2 numbers
 * @a: 1st number
 * @b: 2nd number
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of 2 numbers
 * @a: 1st number
 * @b: 2nd number
 * Return: the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of 2 numbers
 * @a: 1st number
 * @b: 2nd number
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the division of 2 numbers
 * @a: 1st number
 * @b: 2nd number
 * Return: the division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the remainder of division of 2 numbers
 * @a: 1st number
 * @b: 2nd number
 * Return: the remainder of division of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}

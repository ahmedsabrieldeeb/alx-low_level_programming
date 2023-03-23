#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - the sum of a and b
 * @a: first number
 * @b: second number
 *
 * Return: the sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - the difference between a and b
 * @a: first number
 * @b: second number
 *
 * Return: the diff
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - the product of a and b
 * @a: first number
 * @b: second number
 *
 * Return: the product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - the division of a by b
 * @a: first number
 * @b: second number
 *
 * Return: the quotient
 */

int op_div(int a, int b)
{
	if (b)
		return (a / b);
	printf("Error\n");
	exit(100);
}
/**
 * op_mod - the modulus of a by b
 * @a: first number
 * @b: second number
 *
 * Return: the remainder
 */

int op_mod(int a, int b)
{
	if (b)
		return (a % b);
	printf("Error\n");
	exit(100);
}

#include "main.h"
/**
 * _abs - the function name
 * @n: the number to be tested
 *
 * Description: a function that computes the absolute value of an integer.
 *
 * Return: returns the absolute value
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (-1 * n);
	}
}

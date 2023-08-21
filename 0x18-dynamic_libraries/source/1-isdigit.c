#include "main.h"

/**
 * _isdigit - the function name
 * @c: the character to be checked
 *
 * Description: a function that checks for a digit character.
 *
 * Return: returns 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

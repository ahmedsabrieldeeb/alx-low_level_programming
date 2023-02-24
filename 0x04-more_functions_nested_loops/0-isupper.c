#include "main.h"

/**
 * _isupper - the function name
 * @c: the character to be checked
 *
 * Description: a function that checks for up * percase character.
 *
 * Return: returns 1 if c is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		return (1);
	}
	return (0);
}

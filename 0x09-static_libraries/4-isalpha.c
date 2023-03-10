#include "main.h"

/**
 * _isalpha - the function name
 * @c: the character to be checked
 *
 * Description: a function that checks for alphabetic character.
 *
 * Return: returns 1 if c is letter overall, 0 otherwise
 */

int _isalpha(int c)
{
	if (((c >= 97) && (c <= 122)) || ((c >= 65) && (c <= 90)))
		return (1);
	else
		return (0);
}

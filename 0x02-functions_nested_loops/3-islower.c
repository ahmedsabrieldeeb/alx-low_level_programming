#include "main.h"
/**
 * _islower - the function name
 * @c: the character to be checked
 *
 * Description: a function that checks for lowercase character.
 *
 * Return: returns 1 if c is lowercase, 0 otherwise
 */

int _islower(int c)
{
	if ((c >= 97) && (c <= 112))
		return (1);
	else
		return (0);
}

#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte.
 * @s: the start of memory locations to be filled
 * @b: the constant to fill with
 * @n: filling the locations up to n bytes
 *
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}

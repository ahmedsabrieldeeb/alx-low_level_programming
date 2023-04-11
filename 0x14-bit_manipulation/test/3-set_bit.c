#include <stdio.h>
#include "main.h"

/**
 * set_bit - a function that sets the value of a bit to 1 at a given index.
 * @n: the integer to be traversed
 * @index: the index of bit being setted
 *
 * Return: 1 if it worked, -1 if error happens
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int factor, part;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	factor = 1 * (unsigned long int)index;
	part = *n & factor;
	*n = *n >> index;
	*n = *n | 1;
	*n = *n << index;
	*n = *n + part;

	return (1);
}

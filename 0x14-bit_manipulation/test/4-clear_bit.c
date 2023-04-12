#include <stdio.h>
#include "main.h"

/**
 * clear_bit - a function that sets the value of a bit to 1 at a given index.
 * @n: the integer to be traversed
 * @index: the index of bit being setted
 *
 * Return: 1 if it worked, -1 if error happens
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL)
		return (-1);

	if (index >= sizeof(*n) * 8)
		return (-1);

	*n &= ~(1 << index);
	return (1);
}

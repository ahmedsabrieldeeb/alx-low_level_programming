#include <stdio.h>
#include "main.h"

/**
 * flip_bitsa function that returns the number of bits
 * you would need to flip to get from one number to another.
 * @n: the pre number
 * @m: the poest number
 *
 * Return: the number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int temp;
	int flips = 0;
	temp = n ^ m;
	while (temp != 0)
	{
		if (temp & 1)
			flips++;
		temp >>= 1;
	}
	return (flips);
}

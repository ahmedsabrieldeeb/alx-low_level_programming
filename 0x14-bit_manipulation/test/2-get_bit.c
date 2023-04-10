#include <stdio.h>
#include "main.h"

/**
 * get_bit -  a function that returns the value of a bit at a given index
 * @n: the integer to be traversed
 * @index: the index of bit being searched for
 *
 * Return: the value of the bit, -1 if error happens
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;
	unsigned long int temp;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	
	while (i <= index)
	{
		temp = n >> 1;
		if (temp == 0 && (i != index))
		{
			break;
		}
		if (n - (temp * 2) == 0)
		{
			if (i == index)
				return (0);
		}
		else
		{
			if (i == index)
				return (1);
		}
		n = temp;
		i++;
	}
	return (0);
}

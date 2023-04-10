#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * @b: where b is pointing to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * or b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0, i = 0, len = 0, j, temp;

	if (b == NULL)
		return (0);

	while (*(b + i) != '\0')
	{
		if (*(b + i) != '1' && *(b + i) != '0')
			return (0);
		len++;
		i++;
	}

	while (i > 0)
	{
		if (*(b + i - 1) == '1')
		{
			if (len - i == 0)
				result += 1;
			else
			{
				temp = 1;
				for (j = 0; j < (len - i); j++)
					temp *= 2;
				result += temp;
			}
		}
		i--;
	}
	return (result);
}

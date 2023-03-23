#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @array: the array to be searched over
 * @size: number of array elements
 * @cmp: a function pointer
 *
 * Return: returns the index of the first element
 * for which the cmp function does not return 0
 * If no element matches, return -1
 * If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (array && size && cmp)
	{
		int i, index;

		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
		{
			index = cmp(array[i]);
			if (index)
				return (i);
		}
	}
	return (-1);
}

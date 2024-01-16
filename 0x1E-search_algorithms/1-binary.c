
#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 *
 * Description: This function searches for a value in a sorted array
 * and the value to search for is only present once in array
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index where value is located or
 * -1 if value is not present in array or if array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i;
	size_t left = 0;
	size_t right = size - 1;
	size_t mid;

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i != right)
				printf(", ");
		}
		printf("\n");

		mid = (left + right) / 2;

		if (array[mid] == value)
			return ((int)mid);

		if (array[mid] < value)
			left = mid + 1;

		if (array[mid] > value)
			right = mid - 1;
	}
	return (-1);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: number of bytes to be allocated
 * @c: the char to fill the array wih
 *
 * Return: a char pointer to the allocated memory, NULL if failed
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
		return (ptr);

	for (i = 0; i < size; i++)
	{
		*(ptr + i) = c;
	}
	*(ptr + i) = '\0';

	return (ptr);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup -a function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 * @str: a pointer to the string
 *
 * Return: char pointer to the allocated memory, NULL if failed or str is NULL
 */

char *_strdup(char *str)
{
	char *ptr;
	int i = 0, size = 0;

	if (str == NULL)
		return (NULL);

	while (*(str + i) != '\0')
	{
		size += 1;
		i++;
	}

	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
		return (ptr);

	for (i = 0; i < size; i++)
	{
		*(ptr + i) = *(str + i);
	}
	*(ptr + i) = '\0';

	return (ptr);
}

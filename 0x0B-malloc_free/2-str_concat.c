#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings.
 * @s1: the first string
 * @s2: the second one
 *
 * Return: char pointer to the allocated memory, NULL if failed
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int size1 = 0, size2 = 0, i, flag1 = 1, flag2 = 1;

	i = 0;
	while (((*(s1 + i) != '\0') && s1 != NULL)
			|| ((*(s2 + i) != '\0') && s2 != NULL))
	{
		if (*(s1 + i) != '\0' && flag1)
			size1 += 1;
		else
			flag1 = 0;

		if (*(s2 + i) != '\0' && flag2)
			size2 += 1;
		else
			flag2 = 0;

		i++;
	}

	ptr = malloc(sizeof(char) * (size1 + size2 + 1));
	if (ptr == NULL)
		return (ptr);

	for (i = 0; i < size1; i++)
	{
		*(ptr + i) = *(s1 + i);
	}

	for (; i < (size1 + size2); i++)
	{
		*(ptr + i) = *(s2 + (i - size1));
	}

	*(ptr + i) = '\0';

	return (ptr);
}

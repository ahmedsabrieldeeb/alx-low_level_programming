#include "main.h"
/**
 * _strncpy - a function that copies a string.
 * @dest: the destination string to be concatenated to
 * @src: the source string to concatenate
 * @n: the most bytes to concatenate to
 *
 * Description: it will use at most n bytes from src
 * and src does not need to be null-terminated if it contains n or more bytes
 *
 * Return: a pointer to the resulting string dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
		if (*(src + i) == '\0')
		{
			return (dest);
		}
	}
	return (dest);
}

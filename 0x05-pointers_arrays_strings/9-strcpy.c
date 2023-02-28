#include "main.h"
/**
 * _strlen - a function that returns the length of a string.
 * @s: the string to be calculated for its length
 *
 * Return: int value contains the length
 */

int _strlen(char *s)
{
	int i, len;

	i = 0;
	len = 0;

	while (*(s + i) != '\0')
	{	len++;
		i++;
	}

	return (len);
}

/**
 * _strcpy -  a function that copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @dest: the destination
 * @src: the source to copy to
 *
 * Return: char pointer.
 */

char *_strcpy(char *dest, char *src)
{
	int i, len;

	len = _strlen(src);
	i = 0;

	while (i <= (len + 1))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}

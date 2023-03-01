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
 * _strcat - a function that concatenates two strings.
 * @dest: the destination string to be concatenated to
 * @src: the source string to concatenate
 *
 * Description: This function appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte
 *
 * Return: a pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
	int i, j, destLen, srcLen;

	destLen = _strlen(dest);
	srcLen = _strlen(src);
	j = 0;

	for (i = destLen; i <= (destLen + srcLen + 1); i++)
	{
		*(dest + i) = *(src + j);
		j++;
	}
	return (dest);
}

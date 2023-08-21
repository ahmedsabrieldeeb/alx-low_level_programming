#include "main.h"
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

	while (i <= len)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}

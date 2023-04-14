#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"

/**
 * append_text_to_file -  a function that appends text at the end of a file.
 * @filename: the filename to be read
 * @text_content: text to be included in the file if wanted
 *
 * Description: Do not create the file if it does not exist
 * If text_content is NULL, do not add anything to the file
 *
 * Return: 1 on success, -1 on failure
 */


int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t count;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	for (count = 0; text_content[count]; count++)
		;

	if (write(fd, text_content, count) == -1)
		return (-1);

	return (1);
}

#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"

/**
 * create_file - a function that creates a file.
 * it to the POSIX standard output.
 * @filename: the filename to be read
 * @text_content: text to be included in the file if wanted
 *
 * Description: The created file must have those permissions: rw-------.
 * If the file already exists, do not change the permissions.
 * if the file already exists, truncate it
 * if text_content is NULL create an empty file
 *
 * Return: 1 on success, -1 on failure
 */


int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t count;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	for (count = 0; text_content[count]; count++)
		;

	if (write(fd, text_content, count) == -1)
		return (-1);

	return (1);
}


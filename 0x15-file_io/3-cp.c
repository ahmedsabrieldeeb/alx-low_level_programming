#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"


void handle_errors(int fd, char mode, char *file_from, char *file_to);

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: an array of arguments input
 *
 * Return: 0 on success, other exit codes at different condiotions
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to, buffsize = 1024, bytes_read, bytes_written;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	handle_errors(fd_from, 'r', argv[1], NULL);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	handle_errors(fd_to, 'w', NULL, argv[2]);

	while ((bytes_read = read(fd_from, buffer, buffsize)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		handle_errors(bytes_written, 'w', NULL, argv[2]);
	}
	handle_errors(bytes_read, 'r', argv[1], NULL);

	handle_errors(close(fd_from), 'c', argv[1], NULL);
	handle_errors(close(fd_to), 'c', NULL, argv[2]);

	return (0);
}

/**
 * handle_errors - a function to handle the errors while file handling
 * @fd: the file descriptor
 * @mode: the mode of the file to be checked over
 * @file_from: a pointer to the first file
 * @file_to: a pointer to the next file
 * Return: void
 */

void handle_errors(int fd, char mode, char *file_from, char *file_to)
{
	if (fd == -1)
	{
		switch (mode)
		{
			case 'r':
					dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
					exit(98);
			case 'w':
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
				exit(99);
			case 'c':
				dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
				exit(100);
		}
	}
}

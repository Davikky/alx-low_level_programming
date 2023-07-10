#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/*
 * File name: 0-read_textfile.c
 * Auth: Victor A. Adeyemi
 * (c) April, 2023.
 */

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *          function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *  O/w - the actual number of bytes the function can read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t bytes_read, bytes_written;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDWR);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}

	bytes_read = read(fd, buffer, letters);

	if (bytes_read == -1)
		return (0);

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	if (bytes_written == -1 || bytes_written != bytes_read)
		return (0);

	free(buffer);

	close(fd);

	return (bytes_read);
}

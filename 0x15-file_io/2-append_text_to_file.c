/*
 * File: 2-append_text_to_file.c
 * Auth: Victor A. Adeyemi
 * (c) April, 2023
 */

#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>

/**
 * append_text_to_file - appends text to the end of a file.
 * @filename: file name.
 * @text_content: terminated string to add at the end of the file.
 *
 * Return: 1 if the file exists and -1 if the file does not exist.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd = open(filename, O_WRONLY | O_APPEND);
	ssize_t bytes_written = write(fd, text_content, strlen(text_content));

	if (filename == NULL)
		return (-1);

	if (access(filename, F_OK) == -1)
		return (-1);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}

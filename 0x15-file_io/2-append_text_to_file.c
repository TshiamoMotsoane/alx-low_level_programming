#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: a string representing the name of the file
 * @text_content: a NULL terminated string to add at the end of the file
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t write_count;
	ssize_t text_length = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[text_length])
			text_length++;

		write_count = write(fd, text_content, text_length);
		if (write_count == -1 || write_count != text_length)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}

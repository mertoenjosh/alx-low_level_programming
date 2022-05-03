#include "main.h"

/**
 * create_file - a function that creates a file.
 *
 * @filename: the file name
 * @text_content: text content
 *
 * Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd, fd_wr, len;

	if (!filename)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		return (1);

	len = 0;
	while (text_content[len])
		len++;

	fd_wr = write(fd, text_content, len);

	close(fd);

	if (fd_wr == -1)
		return (-1);

	return (1);
}

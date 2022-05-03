#include "main.h"

/**
 * read_textfile - reads a text file and prints
 * it to the POSIX standard output
 *
 * @filename: filename
 * @letters: number of letters it should read and print
 *
 * Return: number of letters or 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, fd_rd, fd_wr;
	char *buff;

	if (!filename)
		return (0);

	buff = malloc(sizeof(char) * letters);

	if (!buff)
		return (0);

	fd = open(filename, O_RDWR);
	if (fd == -1)
	{
		free(buff);
		return (0);
	}

	fd_rd = read(fd, buff, letters);

	if (fd_rd == -1)
		return (0);

	fd_wr = write(STDOUT_FILENO, buff, fd_rd);

	if (fd_wr == -1)
	{
		free(buff);
		return (0);
	}

	if (fd_rd != fd_wr)
		return (0);

	free(buff);
	close(fd);
	return (fd_wr);
}

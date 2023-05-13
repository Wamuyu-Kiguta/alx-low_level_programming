#include "main.h"

/**
 * read_textfile -  reads a text file and prints it to the POSIX STDOUT
 * @filename: the text file to be read
 * @letters: number of letters to be read
 * Return: 0 if filename is NULL and file if file is not readable
 * and if write fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t i;
	ssize_t j;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	j = read(fd, buf, letters);
	i = write(STDOUT_FILENO, buf, j);

	free(buf);
	close(fd);
	return (i);
}

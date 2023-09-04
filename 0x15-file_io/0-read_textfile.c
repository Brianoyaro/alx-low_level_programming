#include "main.h"
/**
 * read_textfile - reads text file and prints to stdout
 * @filename: name of file to read
 * @letters: number of letteers to read from filename
 * Return: number of written characters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t i, j;

	buf = malloc(letters);
	if (buf == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		free(buf);
		close(fd);
		return (0);
	}
	i = read(fd, buf, letters);
	j = write(STDOUT_FILENO, buf, i);
	if (j < 0)
	{
		free(buf);
		close(fd);
		return (0);
	}
	close(fd);
	return (i);
}

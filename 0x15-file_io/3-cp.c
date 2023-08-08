#include <stdio.h>
#include "main.h"
/**
 * main - copies content from one file to another
 * @argc: argument count
 * @argv: argument vectors
 * Return: 0 on success
 */
int main (int argc, char **argv)
{
	char buff[1024];
	int fd1, fd2, j, n_read;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd2 = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((n_read = (read(fd1, buff, 1024))) != 0)
	{
		if (n_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]);
			exit(98);
		}
		j = write(fd2, buff, n_read);
		if (j == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (close(fd1) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	if (close(fd2) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	return (0);
}

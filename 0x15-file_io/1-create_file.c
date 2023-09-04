#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: string to write to file
 * Return: 1 on suucess -1 on error
 */
int create_file(const char *filename, char *text_content)
{
	int fd, j;
	int len = 0;
	int i = 0;

	while (text_content[i])
	{
		len++;
		++i;
	}
	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	j = write(fd, text_content, len);
	if (j < 0)
		return (-1);
	close (fd);
	return (1);
}

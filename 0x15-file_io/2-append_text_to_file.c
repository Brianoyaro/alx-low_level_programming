#include "main.h"
/**
 * append_text_to_file - appends text at file end
 * @filename: file name to append to
 * @text_content: characters to append
 * Return: 1 on success, -1 on error
 */
int append_text_to_file(const char *filename, char *text_content)
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
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	j = write(fd, text_content, len);
	if (j < 0)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}

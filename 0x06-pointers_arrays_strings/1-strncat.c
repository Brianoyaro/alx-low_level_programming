#include "main.h"
/**
 * _strlen - finds length of a string
 * @s: string to find length
 * Return: length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		++s;
	}
	return (length);
}
/**
 * _strncat - concatenates two strings
 * @dest: string to be concatenated
 * @src: string to be concatenated
 * @n: concatenation upper limit bound
 * Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = _strlen(dest);
	int src_len = _strlen(src);
	int a;

	if (n <= src_len)
	{
		for (a = 0; a < n; a++)
			dest[dest_len + a] = src[a];
	}
	else if (n > src_len)
		for (a = 0; a <= src_len; a++)
			dest[dest_len + a] = src[a];

	return (dest);
}

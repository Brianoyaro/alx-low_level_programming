#include "main.h"
/**
 *_strlen - finds the length of a string
 *@s: string to find length
 *Return: returns length of string s
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
 *_strcat - appends src string to dest string overwriting
 *the terminating \0 at dest
 *@dest: string to concatenate
 *@src: string to be concatenated
 *Return: returns concatenated dest string
 */
char *_strcat(char *dest, char *src)
{
	/* first find length of the strings*/
	int dest_len = _strlen(dest);
	int src_len = _strlen(src);
	int a;

	for (a = 0; a <= src_len; a++)
	{
		dest[dest_len + a] = src[a];
		/*++src;*/
	}
	return (dest);
}

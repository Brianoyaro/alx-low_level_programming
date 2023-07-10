#include "main.h"
#include <stdlib.h>
/**
 * _strdup - writes a string to memory
 * @s: string to write to memory
 * Return: pointer to writen string
 * else returns NULL
 */
int length_finder(char *s);
char *_strdup(char *str)
{
	char *arr;
	int length, i;

	length = length_finder(str);
	arr = malloc(sizeof(char) * (length + 1));
	if (arr == NULL)
		return (NULL);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < length; i++)
		arr[i] = str[i];
	return (arr);
}
/**
 * length_finder - finds the length of a string
 * @s: string to find length
 * Return: length of s
 */
int length_finder(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		++s;
	}
	return (length);
}

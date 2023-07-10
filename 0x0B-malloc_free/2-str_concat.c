#include <stdlib.h>
#include "main.h"
int length_finder(char *s);
/**
 * str_concat - concatenates two strings
 * @s1: first stirng to concatenate
 * @s2: second string to concatenate
 * Return: concatenated string else NULL on error
 */
char *str_concat(char *s1, char *s2)
{
	int length1, length2, i, j;
	char *value;

	if (s1 == NULL)
		s1[0] = '\0';
	if (s2 == NULL)
		s2[0] = '\0';
	length1 = length_finder(s1);
	length2 = length_finder(s2);
	value = malloc(sizeof(char) * (length1 + length2 - 1));
	if (value == NULL)
		return (NULL);
	for (i = 0; i < length1; i++)
		value[i] = s1[i];
	for (j = 0; j < length2; j++)
		value[length1 + j] = s2[j];
	return (value);
}
/**
 * length_finder - finds length of a string
 * @s: string to find length
 * Return: length of string s
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

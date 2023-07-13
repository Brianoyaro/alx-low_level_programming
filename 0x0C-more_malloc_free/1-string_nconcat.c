#include "main.h"
#include <stdlib.h>
/**
 * _strlen - finds length oof a string
 * @s: string to find length
 * Return: length of s
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		++s;
	}
	return (len);
}
/**
 * stringnconcat - conactenates two strings
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * Return: pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1, len2;
	char *s;

	if  (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	if (n >= len2)
		n = len2;
	s = malloc(len1 + n + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		s[i] = s1[i];
	for (j = 0; j < n; j++)
		s[len1 + j] = s2[j];
	s[len1 + j] = '\0';
	return (s);
}

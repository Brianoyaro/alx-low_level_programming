#include <stdio.h>
#include "main.h"
/**
 * _strchr - locates a character in a string.
 * @s: string to check from
 * @c: character to check
 * Return: pointer to the first occurrence of c in the string s, 
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == c)
			return s + a;
	}
	return NULL;
}

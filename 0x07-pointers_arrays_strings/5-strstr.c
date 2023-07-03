#include "main.h"
#include <stddef.h>
/**
 * _strstr - locates a substring
 * @haystack: string to locate from
 * @needle: string to locate
 * Return: a pointer to the beginning of the located substring
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int a, b;

	for (a = 0; needle[a] != '\0'; a++)
	{
		for (b = 0; haystack[b] != '\0'; b++)
		{
			if (needle[a] == haystack[b])
				return (needle + a);
		}
	}
	return (NULL);
}

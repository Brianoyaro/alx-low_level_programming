#define NULL 0
#include "main.h"

/**
 * _strpbrk - return pointer to byte in s that matches a byte in accept
 * @s: string to search
 * @accept : byte to match
 * Return:  pointer to index of string at first occurence
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);

		}
	}
	return (NULL);
}

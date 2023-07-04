#define NULL 0
#include "main.h"

/**
 * _strstr - locates a substring 
 * @haystack: string to locate from
 * @needle: string to find
 * Return:  pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j, found_it;

	if (needle[0] == '\0')
		return haystack;

	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			found_it = i;
			j = 0;

			while (needle[j] != '\0')
			{
				if (needle[j] == haystack[found_it])
				{
					found_it += 1;
					j += 1;
				}
				else
					break;

			}
			if (needle[j] == '\0')
				return haystack + i;

		}
		i += 1;
	}
	return NULL;
}

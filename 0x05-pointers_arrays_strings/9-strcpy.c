#include "main.h"
int _strlen(char *s)
{
	int length = 0;

	while (*s != 0)
	{
		length++;
		s++;
	}
	return (length);
}
char *_strcpy(char *dest, char *src)
{
	/*find length of destination*/
	int len_of_dest = _strlen(dest);
	int len_of_src = _strlen(src);
	int a;

	for (a = 0; a <= len_of_src; a++)
	{
		*dest[len_of_dest + a] = *src[a];
	}
}

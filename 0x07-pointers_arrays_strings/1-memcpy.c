#include "main.h"

/**
 * _memcpy - copies memmory area
 * @dest: destion for copying
 * @src: content to be copied
 * @n: bytes to copy
 * return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];

	return (dest);
}

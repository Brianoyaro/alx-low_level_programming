#include "main.h"
/**
 * _memset - fills memory with constant byte
 * @s: pointer to memory area
 * @b: byte to fill with
 * @n: number of memory bytes to fill
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;

	return (s);
}

#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: first string to compare
 * @s2: second string to compare
 * Return: 0 if s1 equals s2
 * > 0 if s1 > s2 and < 0 if s1 < s2
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while (s1[a] == s2[a])
	{
		if (s1[a] == '\0' && s2[a] == '\0')
			return 0;

		a++;
	}
	return (s1[a] - s2[a]);
}

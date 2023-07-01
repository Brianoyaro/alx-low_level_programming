#include "main.h"
/**
 * leet - encodes string to 1337
 * @s: string to encode
 * Return: encoded string 
 */
char *leet(char *s)
{
	int a, b;
	char s1[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int s2[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; s1[b] != '\0'; b++)
		{
			if (s[a] == s1[b])
				s[a] = s2[b];
		}
	}
	return (s);
}

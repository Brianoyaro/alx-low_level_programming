#include "main.h"
unsigned int _strspn(char *s, char *accept)
{
	int  length;
	int value, i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		value = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				value = 1;
				break;
			}
		}
		if (value == 0)
			break;

		else
			length += 1;
	}
	return (length);
}

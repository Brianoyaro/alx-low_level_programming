#include "main.h"

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		++s;
	}
	return (length);
}

void rev_string(char *s)
{
	/*first find the length of the string to be reversed*/
	int len = _strlen(s);
	int i = 0;
	int j = len - 1;
	char tmp;

	while (i < j)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i++, j--;
	}

}

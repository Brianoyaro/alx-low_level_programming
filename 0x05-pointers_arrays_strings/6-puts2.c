#include "main.h"
int _strlen(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		++str;
	}
	return (len);
}

void puts2(char *str)
{
	/*first find length of the string*/
	int i = _strlen(str);
	int a;
	
	for (a = 0; a < i; a++)
	{
		if (*str % 2 == 0)
			_putchar(*str);

		str++;
	}
	_putchar('\n');
}

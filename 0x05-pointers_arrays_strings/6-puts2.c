#include "main.h"
/**
 * _strlen - function that finds the length of a string
 * @str: string whose length is to be computed
 * Return: returns lenght of the string
 */
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

/**
 * puts2 -  prints every other character of a string
 * starting with the first character, followed by a new line.
 * @str: string to be manipulated by puts2 function
 */
void puts2(char *str)
{
	/*first find length of the string*/
	int i = _strlen(str);
	int a;

	for (a = 0; a < i; a++)
	{
		if (a % 2 == 0)
			_putchar(*str);

		str++;
	}
	_putchar('\n');
}

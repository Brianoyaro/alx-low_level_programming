#include "main.h"
/**
 * _strlen - prints the length of a string
 * @str: string to find length
 * Return: length of the string
 */
int _strlen(char *str)
{
	int length = 0;

	while (*str != '\0')
	{
		length++;
		++str;
	}
	return (length);
}
/**
 * puts_half -  prints half of a string, followed by a new line
 * @str: string to be manipulated
 */
void puts_half(char *str)
{
	int len = _strlen(str);
	int a;
	int starting_point;

	if (len % 2 != 0)
		starting_point = ((len / 2) + 1);

	else
		starting_point = len / 2;
	for (a = starting_point; a < len; a++)
	{
		if (a >= starting_point)
			_putchar(str[a]);

	}
	_putchar('\n');
}

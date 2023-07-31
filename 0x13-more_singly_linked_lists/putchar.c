#include "lists.h"

/**
 * _putchar - writes a character to stdout
 * @ch: character to write out
 * Return: 0 on success
 */
int _putchar(char ch)
{
	return (write(1, &ch, 1));
}

#include "lists.h"

/**
 * _putchar - writes a single character to standard output
 * @ch: charcter to write out
 * Return: 0 upon success
 * -1 on error as Errno is set accordingly
 */
int _putchar(char ch)
{
	return (write(1, &ch, 1));
}

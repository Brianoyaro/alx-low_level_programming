#include <unistd.h>
/**
 * _putchar - writes a character to standard output
 * @c: character to output
 * Return: 0 on success
 * on error -1 and errno set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

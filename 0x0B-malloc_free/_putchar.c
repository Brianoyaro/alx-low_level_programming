#include <unistd.h>
/**
 * _putchar - writes a character to standard output
 * @c: character to print to standard output
 * Return: 0 on success
 * -1 on error and errno set accordingly
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}

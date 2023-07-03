#include <unistd.h>
/**
 * _putchar - prints character c to standard output
 * @c: character to display
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

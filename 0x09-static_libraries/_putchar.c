#include <unistd.h>
/**
 * _putchar - writes a charcter to standard utput
 * @c: character to display
 * Return:0 on success
 * -1 on error and errno set appropriately
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}

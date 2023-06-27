#include "main.h"
/**
 *print_rev -  prints a string, in reverse, followed by a new line.
 *@s: string to be reversed
 */
void print_rev(char *s)
{
	int i = 0; /*length*/
	int j;

	/*first find the length of the string */
	while (*s != '\0')
	{
		i++;
		++s;
	}
	/*iterate through string from last element whilst printing each *s */
	for (j = i; j >= 0; j--)
	{
		_putchar(*s);
		--s;
	}
	_putchar('\n');
}

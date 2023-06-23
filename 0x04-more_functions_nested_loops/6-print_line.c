#include "main.h"
/**
 *print_line -prints the character '_' n times to draw a lie
 *n: number of characters in line
 */
void print_line(int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}

#include "main.h"
/**
 *print_line - draws straight line in terminal
 *n: number of steps in line
 */
void print_line(int n)
{
	int i = 0;

	while (i < n)
		_putchar('_');
		i++;
	
	_putchar('\n');
}

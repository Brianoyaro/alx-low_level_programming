#include "main.h"
/***
 *print_diagonal - draws a diagonal line on terminal
 *@n: number of times to draw the line
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n < 0)
	{
		_putchar('\n');
	}
	else if (n > 0)
	{
		j = 0;
		while (j < n)
		{
			_putchar('\\');
			_putchar('\n');
			i = 0;
			while (i < n)
			{
				_putchar(' ');
				if (i == j)
					break;
				i++;
			}
			j++;
		}
		_putchar('\n');
	}
}

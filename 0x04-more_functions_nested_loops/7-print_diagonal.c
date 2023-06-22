#include "main.h"
/***
 *print_diagonal - draws a diagonal line on terminal
 *@n: number of times to draw the line
 */
void print_diagonal(int n)
{
	int space;
	int draw;

	if (n > 0)
	{
		draw = 1;
		while (draw < n)
		{
			_putchar('\\');
			_putchar('\n');
			space = 1;
			while (space < n)
			{
				_putchar(' ');
				if (space == draw)
					break;
				space++;
			}
			draw++;
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}

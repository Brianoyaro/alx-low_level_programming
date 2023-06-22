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
		for (draw = 1; draw <= n; draw++)
		{
			for (space = 1; space < draw; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

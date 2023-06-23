#include "main.h"

/**
 *print_square - prints a square using # for a given size
 *@size: size of square to draw
 */

void print_square(int size)
{
	if (size > 0)
	{
		int row = 0;
		int column;

		while (row < size)
		{
			column = 0;
			while ( column < size)
			{
				_putchar('#');
				column++;
			}
			_putchar('\n');
			row++;
		}
	}
	else
		_putchar('\n');
}

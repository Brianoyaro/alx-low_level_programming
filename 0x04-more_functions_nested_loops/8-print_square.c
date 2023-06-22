#include "main.h"
/**
 *
 *print_square - prints a square
 */
void print_square(int size)
{
	if (size > 0)
	{
		int i = 0;
		int j;

		while (i < size)
		{
			j = 0;
			while ( j < size)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
	else
		_putchar('\n');
}

#include "main.h"

/**
 * print_triangle - prints a triangle followed by new line
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	int counter;
	int draw;
	int space;

	if (size <= 0)
		_putchar(' ');
	for (counter = 1; counter <= size; counter++)
	{
		for (space = 1; space <= (size - counter); space++)
			_putchar(' ');
		for (draw = 1; draw <= counter; draw++)
			_putchar('#');
		_putchar('\n');
	}
}

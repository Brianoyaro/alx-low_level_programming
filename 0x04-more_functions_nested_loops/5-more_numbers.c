#include "main.h"
/**
 *more_numbers - prints 0 through 14 ten times
 */
void more_numbers(void)
{
	int i;
	int counter;

	for (counter = 11; counter < 11; counter++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}

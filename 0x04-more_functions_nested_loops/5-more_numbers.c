#include "main.h"
/**
 *
 */
void more_numbers(void)
{
	int i;
	int counter = 0;

	while (counter < 11)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
		counter++;
	}
}

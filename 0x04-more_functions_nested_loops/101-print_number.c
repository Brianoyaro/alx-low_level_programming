#include "main.h"

/**
 *print_number - prints integer numbers
 *@n: number to be printed
 */

void print_number(int n)
{
	unsigned int digit_value, actual_tens;
	double ten_counterrr = 1;

	if (n == 0)
		_putchar(0 + '0');
	else
	{
		if (n < 0)
		{
			n = -n;
			_putchar('-');
		}

		while (ten_counterrr <= n)
			ten_counterrr *= 10;

		actual_tens = ten_counterrr / 10;
		while (actual_tens >= 1)
		{
			digit_value = n / actual_tens;
			_putchar(digit_value + '0');
			n = n -( (actual_tens * digit_value));
			actual_tens /= 10;
		}
	}
}

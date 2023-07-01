#include "main.h"
/**
 * print_number - prints an integer
 * @n: number to be printed
 */
void print_number(int n)
{
	unsigned int value, r_mul;
	unsigned int mul = 1;

	if (n == 0)
		_putchar(0 + '0');
	else
	{
	       if (n < 0)
		{
			_putchar('-');
			n = -n;
		}
		while ((n / mul) >= 1)
			mul *= 10;

		r_mul = mul / 10;
		for (;r_mul >= 1;)
		{
			value = n / r_mul;
			_putchar(value + '0');
			n = n - (value * r_mul);
			r_mul /= 10;
		}
	}
}

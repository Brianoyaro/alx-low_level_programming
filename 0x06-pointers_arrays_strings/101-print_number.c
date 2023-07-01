#include "main.h"
void print_number(int n)
/*{
	int value;
	int mul = 1;

	while ((n / mul) > 1)
		mul *= 10;

	for (;mul > 1;)
	{
		value = n / mul;
		_putchar(value + '0');
		n = n - (value * mul);
		mul /= 10;
	}
}*/
{
	unsigned int value, r_mul;
	unsigned int mul = 1;

	if (n == 0)
		_putchar(0 + '0');
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n > 0)
	{
		while ((n / mul) > 1)
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

#include "main.h"
/**
 * print_binary - prints a number to binary
 * @n: number to change to binary
 */
void print_binary(unsigned long int n)
{
	int len = 0;
	unsigned long int new_n = n;

	while (new_n > 0)
	{
		len += 1;
		new_n >>= 1;
	}
	if (len > 0)
		len = len - 1;
	while (len >= 0)
	{
		if (n & (1 << len))
			_putchar('1');
		else
			_putchar('0');
		--len;

	}
}

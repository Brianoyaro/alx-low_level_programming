#include "main.h"
/**
 *print_sign : prints the sign of a number
 *@n: number to check
 *Return: 1 if positive, 0 if n equals 0, -1 if negative
 */
int print_sign(int n)
{
	if (n > '1')
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('o');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

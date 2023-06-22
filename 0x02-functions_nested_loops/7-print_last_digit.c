#include "main.h"
/**
 *print_last_digit - prints last digit of a number
 *@i: number to be checked
 *Return: Always 0 (Success)
 */
int print_last_digit(int i)
{
	int m;

	if (i < 0)
	{
		i *= -1;
	}
	m = i % 10;
	_putchar('0' + m);
	return (0);
}

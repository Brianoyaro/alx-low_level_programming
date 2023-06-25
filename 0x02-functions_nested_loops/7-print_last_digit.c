#include "main.h"
/**
 *print_last_digit - prints last digit of a number
 *@i: number to be checked
 *Return: Always 0 (Success)
 */
int print_last_digit(int i)
{
	if (i < 0)
		i = -i;

	_putchar((i % 10) + '0');
	return (i % 10);
}

#include "main.h"
/**
 * get_bit - gets bit type at given index
 * @n: number to find byte from
 * @index: specific position to obtain bit
 * Return: bit type at specified index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int lenn;

	lenn = 4294967295;
	if (index > lenn)
		return (-1);
	return (1 & (n >> index));
}

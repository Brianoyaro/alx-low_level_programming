#include "main.h"
/**
 * set_bit - sets bit at specified index to 1
 * @n: number to set bit
 * @index: position of number to change
 * Return: 1 on success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int mask;
	unsigned long int size;

	size = sizeof(long int)*8;
	if (index > size)
		return (-1);
	mask = 1 << index;
	*n = ((*n & ~mask) | (1 << index));
	return (1);
}

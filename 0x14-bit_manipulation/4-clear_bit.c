#include "main.h"
/**
 * clear_bit - sets bit at index to 0
 * @n: number to change
 * @index: position of n to change
 * Return: 1 on success
 * -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int mask;
	unsigned long int size;

	size = sizeof(long int) * 8;
	if (index > size)
		return (-1);
	mask = 1 << index;
	*n = ((*n & ~mask) | (0 << index));
	return (1);
}

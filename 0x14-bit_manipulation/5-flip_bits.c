#include "main.h"
/**
 * flip_bits - finds number of bits to flip
 * to change one number to another
 * @n: first number to change
 * @m: number to change to
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;
	int rater;

	rater = n ^ m;
	while (rater > 0)
	{
		count++;
		rater &= (rater -1);
	}
	return (count);
}

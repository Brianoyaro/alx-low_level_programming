#include "main.h"
/**
 * factorial - returns factorial of a number
 * @n: number to find factorial
 * Return: factorial of n else -1 if n is negative
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - sums parameters passed to it
 * @n: number of parameters passed
 * Return: sum of parrameters n
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int sum = 0;
	va_list args;
	
	if (n == 0)
		return (0);
	va_start(args, n);
	for (i = 0; i < n; i++)
		sum += va_arg(args, int);
	va_end(args);
	return (sum);
}

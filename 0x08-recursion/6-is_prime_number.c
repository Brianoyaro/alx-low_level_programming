#include "main.h"
int func_divisor(const int n, int i);
/**
 * _prime_number - checks if a number is a prime number
 * @n: number to check
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n == 1 || n < 1)
		return (0);

	return func_divisor(n, 2);
}
/**
 * func_divisor - checks if a number is aprime number
 * @n: number to check
 * @i: divisor to mod the number n
 * Return: 1 if prime, 0 otherwise
 */
int func_divisor(const int n, int i)
{
	if (i == n)
		return (1);
	if ((n % i) == 0)
		return (0);
	return func_divisor(n, (i + 1));
}

#include "main.h"
int func_sqrt(int a, int b, int n);
/**
 * _sqrt_recursion - finds natural square root of a number
 * @n: number to find square root
 * Return: square root of n 
 * -1 if n lacks a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	return (func_sqrt(1,1,n));
}
/**
 * func_sqrt - finds square root of n
 * @a: starting lower bound 1
 * @b: starting lower bound 2
 * @n: number to find square root
 */
int func_sqrt(int a, int b, int n)
{
	if (a >= n || b >= n)
		return (-1);
	else if ((a * b) == n)
		return (a);
	else if ((a * b) != n)
		a++, b++;
	return(func_sqrt(a, b, n));
}

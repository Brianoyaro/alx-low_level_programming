#include <stdio.h>

/**
 *main - finds and prints the largest prime factor of 612852475143
 *Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int n = 612852475143;
	unsigned long int prime_number;

	prime_number = 2;
	while (prime_number <= n)
	{
		if (n % prime_number == 0)
		{
			n /= prime_number;
			prime_number = 2;
		}
		else
			prime_number++;
	}
	printf("%lu\n", n);
	return (0);
}

#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 1;
	int b = 2;
	int sum, summation;
	int i = 0;

	while (i >= 0)
	{
		sum = a + b;
		a = b;
		b = sum;
		if ((a % 2) == 0)
		{
			summation += a;
		}
		if ((b % 2) == 0)
		{
			summation += b;
		}
		if ((b > 4000000) || (a > 4000000))
		{
			break;
		}
		i++;
	}
	printf("%d", summation);
	printf("\n");
	return (0);
}

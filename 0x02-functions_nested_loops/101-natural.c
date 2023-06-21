#include <stdio.h>
/**
 * main - Entry point
 * Return: Aalways 0 (Success)
 */
int main(void)
{
	int sum = 0;
	int n;

	for (n = 0; n < 1024; n++)
	{
		if (((n % 3) != 0) || ((n % 5) != 0))
		{
			continue;
		}
		if (((n % 3) == 0) || ((n % 5) == 0))
		{
			sum += n;
		}
	}
	printf("%d", sum);
	printf("\n");
	return (0);
}

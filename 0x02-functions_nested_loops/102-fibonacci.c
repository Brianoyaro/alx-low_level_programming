#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int  a = 1;
	int  b = 2;
	int sum;
	int i = 0;

	printf("%li", a);
	printf(", ");
	while (i < 49)
	{
		sum = a + b;
		a = b;
		printf("%li", a);
		printf(", ");
		b = sum;
		i++;
	}
	return (0);
}

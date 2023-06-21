#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int a = 1;
	int b = 2;
	int sum;
	int i;

	printf("1, ");
	for (i = 0; i < 48; i++)
	{
		sum = a + b;
		a = b;
		printf("%d", a);
		printf(", ");
		b = sum;
		printf("%d", b);
		printf(", ");
	}
	printf("\n");
	return (0);
}

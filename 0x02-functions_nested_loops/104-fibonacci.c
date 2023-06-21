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
	int i = 0;

	for (i = 0; i < 97; i++)
	{
		printf("%d", a);
		sum = a + b;
		a = b;
		b = sum;
		if (i < 97)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}

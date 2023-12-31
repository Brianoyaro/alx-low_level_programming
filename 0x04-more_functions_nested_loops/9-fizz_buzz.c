#include <stdio.h>
/**
 *main - prints numbers 1 through 100
 *Fizz for multiples of 3
 *Buzz for multiples of 5
 * FizzBuzz for both 3 and 5 multiple
 *Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 1; n < 101; n++)
	{
		if ((n % 3) == 0 && (n % 5) == 0)
			printf("FizzBuzz");
		else if ((n % 3) == 0)
			printf("Fizz");
		else if ((n % 5) == 0)
			printf("Buzz");
		else
			printf("%d", n);
		if (n < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}

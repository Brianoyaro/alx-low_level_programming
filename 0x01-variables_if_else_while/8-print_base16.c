#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int A;

	for (a = 0; a <= 9; a++)
		putchar('0' + a);
	for (A = 0; A <= 5; A++)
		putchar('a' + A);
	putchar('\n');
	return (0);
}

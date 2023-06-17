#include <stdio.h>

/**
 * main -Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int A;

	for (a = 0; a <= 25; a++)
		putchar('a' + a);
	for (A = 0; A <= 25; A++)
		putchar('A' + A);
	putchar('\n');
	return (0);
}

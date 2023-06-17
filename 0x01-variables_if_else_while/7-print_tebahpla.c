#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 25; a >= 0; --a)
		putchar('a' + a);
	putchar('\n');
	return (0);
}

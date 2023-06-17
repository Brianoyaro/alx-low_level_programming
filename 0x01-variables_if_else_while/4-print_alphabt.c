#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 0; a <= 25; a++)
		if (a != 4 && a != 16)
			putchar('a' + a);
	putchar('\n');
	return (0);
}

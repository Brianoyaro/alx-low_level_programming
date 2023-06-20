#include "main.h"
/**
 * print_alphabet_x10 - prints lowercase alphabet letters 10 times.
 *
 * Return: Always0.
 */
void print_alphabet_x10(void)
{
	int a = 0;
	int b;

	while (a < 10)
	{
		for (b = 0; b < 26; b++)
		{
			putchar('a' + b);
		}
		putchar('\n');
		a++;
	}
}

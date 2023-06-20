#include <stdio.h>
/*#include "main.h"*/
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_alphabet(void);
void print_alphabet(void)
{
	int a;
	for (a = 0; a < 26; a++)
	{
		putchar('a' + a);
	}
	putchar('\n');
}
int main(void)
{
	print_alphabet();
	return (0);
}

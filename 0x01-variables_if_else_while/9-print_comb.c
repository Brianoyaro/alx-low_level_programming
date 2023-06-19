#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	while (a <= 9)
		{
		putchar('0' + a);
		putchar(',');
		putchar(' ');
		a++;
		continue;}
	putchar('\n');
	return (0);
}

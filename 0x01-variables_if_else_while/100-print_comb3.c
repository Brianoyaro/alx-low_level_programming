#include <stdio.h>
/**
 * main - Entry point
 * Retrurn: Always 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 0;a < 100;a++)
		if (a < 100)
		{
			putchar((a / 10) + '0');
			putchar((a % 10) + '0');			
			putchar(',');
			putchar(' ');
		}
		putchar('\n');
	return (0);
}

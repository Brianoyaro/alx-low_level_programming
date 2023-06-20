#include "main.h"
/**
 *islower - checks for a lower case character.
 *Return: Always 0.
 */
int _islower(int c)
{

	if (islower(c))
	{
		_putchar(1 + '0');
	}
	else if (isupper(c))
	{
		putchar(0 + '0');
	}
}

#include "main.h"
/**
 * _abs(int) -  computes the absolute value of an integer
 * @i: Vlaue to be computed
 * Return: Always 0 (Success)
 */
int _abs(int i)
{
	if (i < 0)
		return (-i);

	else if (i > 0)
		return (i);

	return (0);
}

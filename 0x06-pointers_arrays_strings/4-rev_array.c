#include "main.h"
/**
 * reverse_array - reverses the contents of an array
 * @; array to be reversed
 * @n: number of elements in array
 */
void reverse_array(int *a, int n)
{
	int i, j;
	char tmp;

	for (i = 0, j = n - 1; i < j; ++i, --j)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}

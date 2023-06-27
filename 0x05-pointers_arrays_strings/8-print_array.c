#include <stdio.h>
#include "main.h"
/**
 * print_array -  prints n elements of an array of integers, followed by a new line.
 * @a: array whose elements are to be printed
 * @n: number of elements to be printed
 */
void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		printf("%d", *a);
		if (b < n - 1)
			printf(", ");

		a++;
	}
	printf("\n");
}

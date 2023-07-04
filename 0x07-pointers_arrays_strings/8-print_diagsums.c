#include "main.h"
#include <stdio.h>

/**
 * print_diagsum -  prints the sum of two diagonals of a square matrix
 * @a: matrix name
 * @size: matrix size
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i <= size * size; i = i + size + 1)
		sum1 += a[i];

	for (j = size - 1; j <= (size * size) - size; j = j + size - 1)
		sum2 += a[j];

	printf("%d, %d\n", sum1, sum2);

}

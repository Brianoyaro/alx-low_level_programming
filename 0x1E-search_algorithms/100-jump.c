#include <math.h>
#include "search_algos.h"
/**
 * jump_search - implements jump search algorithm
 * @array: array to traverse
 * @size: size of array
 * @value: value to find
 * Return: index of value else -1
 */
int jump_search(int *array, size_t size, int value)
{
	int a = 0, b, sizee = size;

	if (size == 0)
		return (-1);
	b = sqrt(sizee);
	printf("Value checked array[%d] = [%d]\n", a, array[a]);
	while (array[b] < value)
	{
		printf("Value checked array[%d] = [%d]\n", b, array[b]);
		a = b;
		b += sqrt(sizee);
		if (b >= sizee)
			break;
	}
	printf("Value found between indexes [%d] and [%d]\n", a, b);
	if (b > sizee)
		b = size - 1;
	for (a = a; a <= b; a++)
	{
		printf("Value checked array[%d] = [%d]\n", a, array[a]);
		if (array[a] == value)
			return (a);
	}
	return (-1);
}

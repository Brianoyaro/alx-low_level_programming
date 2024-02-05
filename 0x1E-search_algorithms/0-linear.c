#include "search_algos.h"
/**
 * linear_search - implements linear search algorithm
 * @array: array to search
 * @size: size of array
 * @value: value to search
 * Return: -1 on error else index of value
 */
int linear_search(int *array, size_t size, int value)
{
	size_t n = 0;

	if (size == 0)
		return (-1);
	for (; n < size; n++)
	{
		printf("Value checked array[%ld] = [%d]\n", n, array[n]);
		if (array[n] == value)
			return (n);
	}
	return (-1);
}

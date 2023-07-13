#include "main.h"
#include <stdlib.h>
/*
 * array_range - creates an array of integers
 * @min: starting value
 * @min:stoping value
 * Return: pointer to newly created array
 */
int *array_range(int min, int max)
{
	int i;
	int *arr;

	if (min > max)
		return (NULL);
	arr = malloc(((max - min) + 1) * sizeof(int));
	if (arr == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		arr[i] = min;
		++min;
	}
	return (arr);
}

#include <stddef.h>
/**
 * array_iterator - executes a function per array element
 * @array: array to iterate over
 * @size: size of array
 * @action: function to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action != NULL && array != NULL)
		for (i = 0; i < size; i++)
			action(array[i]);
}

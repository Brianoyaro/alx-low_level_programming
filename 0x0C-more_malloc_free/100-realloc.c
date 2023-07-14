#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates memory block
 * @ptr: previous memory block
 * @old_size: previous size of ptr
 * @new_size: new size to be reallocated
 * Return: pointer to reallocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *arr;
	unsigned int i;

	if (new_size == 0 || ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		arr = malloc(new_size);
		if (arr == NULL)
			return (NULL);
		else
			return (arr);
	}
	arr = malloc(new_size);
	if (arr == NULL)
		return (NULL);
	for (i = 0 ; i < old_size && i < new_size; i++)
		*((char *)arr + i) = *((char *)ptr + i);
	free(ptr);
	return (arr);
}

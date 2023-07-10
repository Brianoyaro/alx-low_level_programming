#include "main.h"
#include <stdlib.h>
/**
 * create_array - createa a array of charcters
 * initalised to specific character
 * @size: size of array
 * @c: charctere type to initaialise array with
 * Return: pointer to array
 * NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * (size + 1));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}

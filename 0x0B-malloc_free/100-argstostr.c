#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates arguments of a program
 * @ac: argument count
 * @av:argument vectors
 * Return: pointer to concatenated string
 * else NULL on error
 */
char *argstostr(int ac, char **av)
{
	int i, j;
	int a = 0;
	int length = 0;
	char *arr;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			;
		length += j + 1;
	}
	arr = malloc(sizeof(char) * length + 1);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, a++)
			arr[a] = av[i][j];
		arr[a++] = '\n';
	}
	return (arr);
}

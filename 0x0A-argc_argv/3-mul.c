#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 * 1 on error
 */
int main(int argc, char *argv[])
{
	int a, b, i;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
		for (i = 1; i < 3; i++)
		{
			a = atoi(argv[1]);
			b = atoi(argv[2]);
		}
	printf("%d\n", a * b);
	return (0);
}

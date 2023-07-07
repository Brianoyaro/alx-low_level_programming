#include <stdio.h>
#include "main.h"
/**
 * main - prints number of arguments passed to it
 * @argc: argument count
 * @ardv: argument vectors
 * Return: 0 when successfull
 */
int main(int argc, char *argv[])
{
	(void) argv;
	if (argc > 0)
		printf("%d\n", argc - 1);

	return (0);
}

#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcode
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success and 1 on Error
 */
int main(int argc, char *argv[])
{
	char *arr;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	if (i < 0)
	{
		printf("Error\n");
		return (2);
	}

	arr = (char *)main;
	for(;i > 0; i--, arr++)
	{
		printf("%02x", *arr & 0xff);
		if (i != 1)
			putchar(' ');
	}
	putchar('\n');
	return (0);
}

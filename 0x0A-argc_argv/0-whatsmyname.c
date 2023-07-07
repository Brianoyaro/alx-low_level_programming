#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its name followed by a new line
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0 (Success)
 */

int main(int argc, char* argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}

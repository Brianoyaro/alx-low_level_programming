#include <stdio.h>
#include <stdlib.h>
#include "main.h"
int main(int argc, char *argv[])
{
	int value1, value2;
	int i, num, minimum;
	int changer[6] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 0; i < 5; i++)
	{
		num = atoi(argv[i]);
		if (num < 0)
		{
			printf("0\n");
			return (0);
		}
		else if (num < changer[i])
			continue;

		else
			break;
	}
	value1 = num / changer[i];
	value2 = num % changer[i];
	minimum = value1 + value2;
	printf("%d\n", minimum);
	return (0);
}

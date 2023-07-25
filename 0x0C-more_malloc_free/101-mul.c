#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int _check(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (!(s[i] >= '0' && s[i] <= '9'))
			return (NULL);
	}
}
int main(int argc, char *argv[])
{
	long unsigned int num1, num2, i;

	num1 = _check(argv[1]);
	num2 = _check(argv[2]);
	if (num1 == NULL || num2 == NULL)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

}	return (num1 * num2);

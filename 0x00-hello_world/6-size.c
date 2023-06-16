# include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	printf("Size of a char: %lu\n",sizeof(char));
	printf("Size of an integer: %lu\n",sizeof(int));
	printf("Size of a long integer: %lu\n",sizeof(long int));
	printf("Size of a long long integer: %lu\n",sizeof(long long int));
	printf("Size of a float: %lu\n",sizeof(float));
	return (0);
}

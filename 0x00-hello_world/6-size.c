# include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;
	int i;
	long int b;
	long long int d;
	float f;
	printf("Size of a char: %lu\n",sizeof(c));
	printf("Size of an integer: %lu\n",sizeof(i));
	printf("Size of a long integer: %ld\n",(signed  long)sizeof(b));
	printf("Size of a long long integer: %llu\n",(unsigned long long)sizeof(d));
	printf("Size of a float: %lu\n",(unsigned long)sizeof(f));
	return (0);
}

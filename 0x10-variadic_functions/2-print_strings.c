#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings followed by new line
 * @separator: string to print between consecutive strings
 * @n: total strings to print
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *x;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, char *);
		if (x == NULL)
			printf("(nil)");
		printf("%s", x);
		if (separator != NULL && (i < n - 1))
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}

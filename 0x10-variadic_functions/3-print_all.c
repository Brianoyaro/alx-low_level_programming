#include <stdarg.h>
#include <stdio.h>
#include <string.h>
/**
 * print_all - prints anything
 * @format: list of arguments passed to function
 */
void print_all(const char * const format, ...)
{
	int i, len;
	va_list args;
	char *str;

	len = strlen(format);
	va_start(args, format);
	i = 0;
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char*);
				if (str == NULL)
					printf("(nil)");
				printf("%s", str);
				break;
			default:
				i++;
				continue;
		}
		if (i <= (len - 2))
			printf(", ");
		i++;
	}
	va_end(args);
	printf("\n");
}

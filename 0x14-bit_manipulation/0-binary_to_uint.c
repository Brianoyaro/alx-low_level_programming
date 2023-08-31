#include "main.h"
/**
 * binary_to_uint - converts binary to unsigned int
 * @b: binary to convert
 * Return: unsigned equivalent of b
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int sum = 0;
	int len = 0;

	if (b == NULL)
		return (0);
	while (b[len])
	{
		++len;
	}
	len -= 1;
	while (b[i])
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		if (b[i] == '1')
			sum += (1 << len);
		--len, ++i;
	}
	return (sum);
}

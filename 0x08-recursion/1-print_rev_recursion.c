#include "main.h"
char * _reverse_string(char *s, int a, int j);
int find_length(char *s, int length);
void _print_rev_recursion(char *s)
{
	int j;
	j = find_length(s, 0);
	_reverse_string(s, 0, j);
}
int find_length(char *s, int length)
{
	if (s[length] == '\0')
		return (length);
	if (s[length] != '\0')
		length++;
	return (find_length(s, length + 1));
}
char * _reverse_string(char *s, int a, int j)
{
	if (a > j)
		return (s);
	if (a <= j)
	{
		s[a] = s[j];
		a++, j++;
	}
	return _reverse_string(s, a, j);
}

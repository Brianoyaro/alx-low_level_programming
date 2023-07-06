#include "main.h"
int string_length(char *s, int a);
int checker_fxn(char *s, int a, int b);
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 * Return: 1 if s is a palindrome 0 if not
 */
int is_palindrome(char *s)
{
	int length;

	length = string_length(s, 0);
	return (checker_fxn(s, 0, length));
}
/**
 * checker_fxn - checks if a string is a palindrome
 * @s: string to check
 * @a: lower starting bound
 * @b: upper starting bound
 * Return: 1 if s is a palindrome 0 otherwise
 */
int checker_fxn( char *s, int a, int b)
{
	if (s[a] != s[b])
		return (0);
	else if (a > b)
		return (1);
	else if (s[a] == s[b])
	{
		a++;
		--b;
	}
	return (checker_fxn(s, a, b));
}
/**
 * string_length - finds length of a string
 * @s: string to find length
 * @a: string length
 * Return: length of s
 */
int string_length(char *s, int a)
{
	if (s[a] == '\0')
		return (a);
	if (s[a] != '\0')
		a++;
	return (string_length(s, a));
}

#include "main.h"

/**
 *_isalpha - checks for alphabet character
 *@c: character to check
 *Return: 1 when alphabet, 0 when not alphabet.
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

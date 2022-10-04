#include "main.h"

/**
 * _isalpha - checks if char is alphabet
 *
 * @c: The character in ASCII code
 *
 * Return: returns 1 if alphabet 0 otherwise
 *
 */

int _isalpha(int c)
{
	if ((c >= 97 && c < 123) || (c >= 65 && c < 91))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

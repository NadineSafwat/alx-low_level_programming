#include "msin.h"

/**
 * _isupper - checks if parameter is an uppercase character.
 * @c: input character.
 * Return: returns 1 if digit from 0 to 9, 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

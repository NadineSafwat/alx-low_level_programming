#include "msin.h"

/**
 * _isdigit - checks if parameter is a digit between 0 and 9
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

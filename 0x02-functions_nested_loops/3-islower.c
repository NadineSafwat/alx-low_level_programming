#include "main.h"

/**
 * _islower - checks if the charecter is lowercase
 *
 * Return: returns 1 if the char is lowercase and 0 otherwise
 *
 */

int _islower(int c)
{
	if (c >= 97 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

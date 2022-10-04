#include "main.h"

/**
 * _abs - computes the absulute value of the number
 *
 * @n: positive of negative integer
 *
 * Return: the absolute value of n
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-1 * n);
	}
	else
	{
		return (0);
	}
}

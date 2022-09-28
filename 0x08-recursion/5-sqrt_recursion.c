#include "main.h"

/**
 * reciprocal_pow - returns the natural square root of a number.
 * @n: input number.
 * @c: iterator.
 * Return: square root of n
 */

int reciprocal_pow(int n, int c)
{
	if (c % (n / c) == 0)
	{
		if (c * (n / c) == n)
		{
			return (c);
		}
		else
		{
			return (-1);
		}
	}
	return (0 + reciprocal_pow(n, c + 1));
}

/**
 * _sqrt_recursion - calculate the natural square root of a number
 * @n: the input integer
 * Return: the natural square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (reciprocal_pow(n, 2));
	}
}

#include "main.h"

/**
 * print_last_digit - prints the last digit of a the argument
 *
 * @n: integer number to be used
 *
 * Return: returns the last digit of n
 */

int print_last_digit(int n)
{
	int last;

	last  = n % 10;
	if (last < 0)
	{
		_putchar(-last + 48);
		return (-last);
	}
	else
	{
		_putchar(last + 48);
		return (last);
	}
}

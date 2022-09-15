#include "main.h"

/**
 * print_diagonal - print diagonal with backslash
 * @n: number of back slashes
 * Return: nothing(void)
 */

void print_diagonal(int n)
{
	int i = 0;
	int j = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i < n)
		{
			while (j < i)
			{
				_putchar(' ');
				j++;
			}
			j = 0;
			_putchar(92);
			i++;
			_putchar('\n');
		}
	}
}

#include "main.h"

/**
 * print_line - pring series of underscore
 * @n: the number of underscores to be printed
 * Return: nothing(void)
 */

void print_line(int n)
{
	int i = 0;

	while (i <= n)
	{
		if (n == 0)
		{
			break;
		}
		_putchar(95);
		i++;
	}
	_putchar('\n');
}

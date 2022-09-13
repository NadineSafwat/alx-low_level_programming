#include "main.h"

/**
 * times_table - compute the time tables from 0 to 9
 *
 * Return: void
 */

void times_table(void)
{
	int i, j, mult;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			mult = j * i;
			if (j != 9)
			{
				_putchar(mult);
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(mult);
			}
		}
		_putchar('\n');
	}
}

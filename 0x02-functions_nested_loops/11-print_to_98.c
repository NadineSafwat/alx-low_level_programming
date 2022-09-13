#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints from any number to 98
 *
 * @n: the number to start from
 *
 * Return: void
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	else if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	printf("%d\n", n);
}

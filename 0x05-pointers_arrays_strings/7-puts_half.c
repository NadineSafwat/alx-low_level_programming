#include "main.h"

/**
 * puts_half - prints half of the string
 * @str: input string
 * Return: nothing
 */

void puts_half(char *str)
{
	int i = 0, j, x;

	while (i >= 0)
	{
		if (str[i] == '\0')
		{
			break;
		}
		i++;
	}
	if (i % 2 == 1)
	{
		x = i / 2;
	}
	else
	{
		x = (i - 1) / 2;
	}
	for (j = x + 1; j < i; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}

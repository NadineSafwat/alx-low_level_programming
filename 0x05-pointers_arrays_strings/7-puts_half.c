#include "main.h"

/**
 * puts_half - prints half of the string
 * @str: input string
 * Return: nothing
 */

void puts_half(char *str)
{
	int i = 0, j, x;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
		x = i;
	else
		x = (i - 1) / 2;
	for (j = x / 2; j <= (i - 1); j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}

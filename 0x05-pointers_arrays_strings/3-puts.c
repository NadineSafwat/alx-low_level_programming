#include "main.h"

/**
 * _puts - prints a string to the stdout
 * @str: the string input
 * Return: nothing (void)
 */

void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

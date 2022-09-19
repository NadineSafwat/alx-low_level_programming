#include "main.h"

/**
 * _strlen - gets the length of the string
 * @s: the string input
 * Return: the length of the input string
 */

int _strlen(char *s)
{
	int i, j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		j++;
		i++;
	}
	return (j);

}

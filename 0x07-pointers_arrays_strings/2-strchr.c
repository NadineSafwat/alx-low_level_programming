#include "main.h"

/**
 * _strchr - searches for a charecter in a string
 * @s: pointer to a string
 * @c: charecter to be searched for
 * Return: pointer to the first occur of c or NULL is not found
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
		i++;
	}
	if (*(s + i) == c)
	{
		return (s + i);
	}
	return ('\0');
}

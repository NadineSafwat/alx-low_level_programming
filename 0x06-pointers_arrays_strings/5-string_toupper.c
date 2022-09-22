#include "main.h"

/**
 * string_toupper - it transform lower case to upper
 * @str: input string
 * Return: uppercase string
 */

char *string_toupper(char *str)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		if ((*(s + count) >= 97) && (*(s + count) <= 122))
		{
			*(s + count) = *(s + count) - 32;
		}
		count++;
											}
	return (s);
}

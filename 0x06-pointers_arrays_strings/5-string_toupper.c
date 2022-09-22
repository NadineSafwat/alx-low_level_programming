#include "main.h"

/**
 * string_toupper - it transform lower case to upper
 * @str: input string
 * Return: uppercase string
 */

char *string_toupper(char *str)
{
	int count = 0;

	while (*(str + count) != '\0')
	{
		if ((*(str + count) >= 97) && (*(str + count) <= 122))
		{
			*(str + count) = *(str + count) - 32;
		}
		count++;
											}
	return (str);
}

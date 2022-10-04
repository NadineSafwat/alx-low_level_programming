#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copy a string to another
 * @dest: destination
 * @src: parameter with string
 * Return: copied string
 */

char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
											}
	return (dest);
}

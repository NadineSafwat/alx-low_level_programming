#include "main.h"

/**
 * _strncpy - copies a string to another
 * @dest: the destination string
 * @src: the string copied
 * @n: number of bytes
 * Return: new dest string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}

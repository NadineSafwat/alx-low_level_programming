#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars initializes it with a specific char
 * @size: size of array
 * @c: special character
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ptr = malloc(sizeof(c) * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
}

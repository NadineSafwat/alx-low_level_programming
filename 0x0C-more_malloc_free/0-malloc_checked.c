#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate mory using malloc
 * @b: input integer
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	char *i;

	i = malloc(b);
	if (i == NULL)
	{
		exit(98);
	}
	return (i);
}

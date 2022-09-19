#include "main.h"

/**
 * swap_int - takes two integes and swap their values
 * @a: first integer
 * @b: second integer
 * Return: nothing(void)
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b  = temp;
}

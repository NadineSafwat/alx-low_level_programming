#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each
 * element of an array
 * @array: pointerto an array of integers
 * @size: array size
 * @action: pointer to a function
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && action)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}

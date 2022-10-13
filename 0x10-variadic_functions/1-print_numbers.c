#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list plist;
	unsigned int i;

	va_start(plist, n);

	for (i == 0; i < n; i++)
	{
		printf("%d", va_arg(plist, int));
		if (separator != '\0' && i < n - 1)
		{
			printf("%c", separator);
		}
	}

	printf("\n");

	va_end(plist);
}

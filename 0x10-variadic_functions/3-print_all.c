#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_all - function that prints anything
 * @format: list of types of arguments passed to function
 *
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list plist;
	unsigned int i = 0, j, c = 0;
	char *strings;
	const char t_arg[] = "cifs";

	va_start(plist, format);
	while (format && format[i])
	{
		j = 0;
		while (t_arg[j])
		{
			if (format[i] == t_arg[j] && c)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(plist, int)), c = 1;
				break;
			case 'i':
				printf("%d", va_arg(plist, int)), c = 1;
				break;
			case 'f':
				printf("%f", va_arg(plist, double)), c = 1;
				break;
			case 's':
				strings = va_arg(plist, char *), c = 1;
				if (!strings)
				{
					printf("(nil)");
					break;
				}
				printf("%s", strings);
				break;
			} i++;
		}
		printf("\n"), va_end(plist);
}

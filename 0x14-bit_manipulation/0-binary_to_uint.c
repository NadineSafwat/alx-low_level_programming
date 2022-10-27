#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ui;
	int length;
	int base_two;

	if (b)
	{
		ui = 0;

		for (length = 0; b[length] != '\0'; length++)
			;

		for (length--, base_two = 1; length >= 0; length--, base_two *= 2)
		{
			if (b[length] != '0' && b[length] != '1')
			{
				return (0);
			}
			if (b[length] & 1)
			{
				ui += base_two;
			}
		}
		return (ui);
	}
	else
	{
		return (0);
	}
}

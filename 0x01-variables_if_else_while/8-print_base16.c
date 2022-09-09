#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always return 0
 *
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (i = 97; i < 103; i++)
	{
		putchar(0);
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always returns 0
 *
 */

int main(void)
{
	int i;
	char alps[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (i = 0; i < 52; i++)
	{
		putchar(alps[i]);
	}
	putchar('\n');
	return (0);
}

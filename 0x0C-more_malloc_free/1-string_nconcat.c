#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: input integer
 * Return: pointer to the new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newstr;
	unsigned int ls1, ls2, lsout, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (ls1 = 0; s1[ls1] != '\0'; ls1++)
		;

	for (ls2 = 0; s2[ls2] != '\0'; ls2++)
		;

	if (n > ls2)
		n = ls2;

	lsout = ls1 + n;

	newstr = malloc(lsout + 1);

	if (newstr == NULL)
		return (NULL);

	for (i = 0; i < lsout; i++)
		if (i < ls1)
			newstr[i] = s1[i];
		else
			newstr[i] = s2[i - ls1];

	newstr[i] = '\0';

	return (newstr);
}

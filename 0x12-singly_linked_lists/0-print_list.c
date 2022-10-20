#include "lists.h"
#include <stdio.h>

/**
 * print_list - print all the elements of a list_t
 * @h: input list of type list_t
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t lnklst;

	lnklst = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}

		h = h->next;
		lnklst++;
	}
	return (lnklst);
}

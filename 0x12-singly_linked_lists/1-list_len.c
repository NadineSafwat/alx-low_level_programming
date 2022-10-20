#include "lists.h"

/**
 * list_len - gets the length of a linked list
 * @h: passed linked list
 *
 * Return: the number of element of the list
 */

size_t list_len(const list_t *h)
{
	size_t lst;

	lst = 0;
	while (h != NULL)
	{
		h = h->next;
		lst++;
	}
	return (lst);
}

#include "lists.h"

/**
 * add_dnodeint - adds node at the beginning of list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nd;
	dlistint_t *h;

	nd = malloc(sizeof(dlistint_t));
	if (nd == NULL)
	{
		return (NULL);
	}
	nd->n = n;
	nd->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
		{
			h = h->prev;
		}
	}
	nd->next = h;
	if (h != NULL)
	{
		h->prev = nd;
	}
	*head = nd;
	return (nd);
}

#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node
 * @head: head of a list.
 * @idx: index of the list of the new node
 * @n: integer element.
 *
 * Return: the address of the new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *nnd;
	listint_t *h;

	h = *head;
	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && h != NULL; i++)
		{
			h = h->next;
		}
	}
	if (h == NULL && idx != 0)
	{
		return (NULL);
	}

	nnd = malloc(sizeof(listint_t));
	if (nnd == NULL)
	{
		return (NULL);
	}
	nnd->n = n;
	if (idx == 0)
	{
		nnd->next = *head;
		*head = nnd;
	}
	else
	{
		nnd->next = h->next;
		h->next = nnd;
	}
	return (nnd);
}

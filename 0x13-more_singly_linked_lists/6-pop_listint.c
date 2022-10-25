#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: head of a list.
 *
 * Return: head node's data.
 */

int pop_listint(listint_t **head)
{
	int hdnd;
	listint_t *h;
	listint_t *current;

	if (*head == NULL)
	{
		return (0);
	}
	current = *head;
	hdnd = current->n;
	h = current->next;
	free(current);
	*head = h;

	return (hdnd);
}

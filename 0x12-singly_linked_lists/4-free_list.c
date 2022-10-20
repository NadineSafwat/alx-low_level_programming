#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: linked list head
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *nod;

	while ((nod = head) != NULL)
	{
		head = head->next;
		free(nod->str);
		free(nod);
	}
}

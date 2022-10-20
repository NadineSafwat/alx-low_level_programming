#include "lists.h"

/**
 * add_node_end - adds node to end of list
 * @head: pointer to the node
 * @str: string to be add to the node
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nwnd, *temp;
	size_t nwstr;

	nwnd = malloc(sizeof(list_t));
	if (nwnd == NULL)
	{
		return (NULL);
	}
	nwnd->str = strdup(str);

	for (nwstr = 0; str[nwstr]; nwstr++)
		;

	nwnd->len = nwstr;
	nwnd->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = nwnd;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = nwnd;
	}

	return (*head);
}

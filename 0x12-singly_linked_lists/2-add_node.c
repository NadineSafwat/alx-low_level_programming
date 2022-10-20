#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: the linked list head node
 * @str: the string to be added to the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *nwlst;
	size_t nwstr;

	nwlst = malloc(sizeof(list_t));
	if (nwlst == NULL)
	{
		return (NULL);
	}

	nwlst->str = strdup(str);

	for (nwstr = 0; str[nwstr]; nwstr++)
		;

	nwlst->len = nwstr;
	nwlst->next = *head;
	*head = nwlst;

	return (*head);
}

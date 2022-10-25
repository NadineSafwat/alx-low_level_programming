#include "lists.h"

/**
 * add_nodeint - add a new node at begainning
 * @head: head of a list.
 * @n: element.
 *
 * Return: address of the new element. NUll if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *begain;

	begain = malloc(sizeof(listint_t));
	if (begain == NULL)
	{
		return (NULL);
	}
	begain->n = n;
	begain->next = *head;
	*head = begain;

	return (*head);
}

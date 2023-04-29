#include "lists.h"

/**
* add_nodeint_end - function adds a new node at the end of a listint_t list
* @head: pointer to first node in the list
* @n: number to be added to the list
*
* Return: the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tail = *head;
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	while (tail->next != NULL)
		tail = tail->next;

	tail->next = new;

	return (new);
}

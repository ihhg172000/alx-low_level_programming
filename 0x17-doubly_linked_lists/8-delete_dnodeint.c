#include "lists.h"

/**
* delete_dnodeint_at_index -  deletes a node at a given position.
* @head: a pointer to the pointer that points to the head of the list.
* @index: the index.
*
* Return: 1 if it succeeded, -1 if it failed.
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr = NULL, *prev = NULL, *next = NULL;

	curr = *head;

	if (!(*head))
		return (0);

	if (index == 0)
		*head = (*head)->next;

	while (curr->next && index > 0)
	{
		curr = curr->next;
		index--;
	}

	if (index != 0)
		return (0);

	prev = curr->prev;
	next = curr->next;

	free(curr);

	if (next)
		next->prev = prev;

	if (prev)
		prev->next = next;

	return (1);
}

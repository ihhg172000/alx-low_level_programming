#include "lists.h"

/**
* insert_dnodeint_at_index -  inserts a new node at a given position.
* @h: a pointer to the pointer that points to the head of the list.
* @idx: the index.
* @n: tha number to be added to the list.
*
* Return: the address of the new node, or NULL if it failed.
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *curr = NULL, *temp = NULL, *new = NULL;

	new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	curr = *h;

	if (idx == 0)
		*h = new;

	while (curr && idx > 0)
	{
		temp = curr;
		curr = curr->next;
		idx--;
	}

	if (idx != 0)
	{
		free(new);
		return (NULL);
	}

	new->next = curr;
	new->prev = temp;

	if (temp)
		temp->next = new;

	if (curr)
		curr->prev = new;

	return (new);
}

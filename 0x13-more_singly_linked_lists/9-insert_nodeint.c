#include "lists.h"

/**
* insert_nodeint_at_index - function inserts a new node at a given position
* @head: pointer to first node in linked list
* @idx: the index of the list where the new node should be added
* @n: the number to be added to linked list
*
* Return: the address of the new node, or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *curr, *new, *temp;
	unsigned int curr_idx;

	new = malloc(sizeof(listint_t));

	if (head == NULL || new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	curr = *head;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (curr_idx = 0; curr_idx < (idx - 1); curr_idx++)
	{
		if (curr->next != NULL)
			curr = curr->next;
		else
			return (NULL);
	}

	temp = curr->next;
	curr->next = new;
	new->next = temp;

	return (new);
}

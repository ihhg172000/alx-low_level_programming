#include "lists.h"

/**
* get_dnodeint_at_index -  returns the nth node of a dlistint_t linked list.
* @head: a pointer to the first element in the list.
* @index: the index.
*
* Return: the node at index or NULL if the node does not exist.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (head && index > 0)
	{
		head = head->next;
		index--;
	}

	if (index == 0)
		return (head);

	return (NULL);
}

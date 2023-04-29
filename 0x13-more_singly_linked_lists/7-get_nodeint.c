#include "lists.h"

/**
* get_nodeint_at_index - function returns the nth node of a linked list
* @head: first node in linked list
* @index: is the index of the node
*
* Return: node at index or NULL if the node does not exist,
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *curr = head;
	unsigned int i;

	for (i = 0; curr != NULL; i++)
	{
		if (i == index)
			return (curr);

		curr = curr->next;
	}

	return (NULL);
}

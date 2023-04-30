#include "lists.h"

/**
* delete_nodeint_at_index - function deletes the node at index of a linked list
* @head: pointer to first node in linked list
* @index: the index of the node that should be deleted
*
* Return: 1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr, *temp;
	unsigned int curr_idx;

	if (head == NULL || *head == NULL)
		return (-1);

	curr = *head;

	if (index == 0)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
		return (1);
	}

	for (curr_idx = 0; curr_idx < (index - 1); curr_idx++)
	{
		if (curr->next != NULL)
			curr = curr->next;
		else
			return (-1);
	}

	temp = (curr->next)->next;
	free(curr->next);
	curr->next = temp;

	return (1);

}

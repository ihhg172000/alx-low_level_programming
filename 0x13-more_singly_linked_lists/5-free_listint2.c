#include "lists.h"

/**
* free_listint2 - function frees a listint_t list
* @head: pointer to first node in linked list
*/
void free_listint2(listint_t **head)
{
	listint_t *curr = *head, *next;

	while (curr != NULL)
	{
		next = curr->next;
		free(curr);
		curr = next;
	}

	*head = NULL;
}

#include "lists.h"

/**
* free_listint - function frees a listint_t list
* @head: first node in linked list
*/
void free_listint(listint_t *head)
{
	listint_t *curr = head, *next;

	while (curr != NULL)
	{
		next = curr->next;
		free(curr);
		curr = next;
	}
}

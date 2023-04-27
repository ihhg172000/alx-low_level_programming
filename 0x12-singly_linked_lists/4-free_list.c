#include "lists.h"

/**
* free_list - function frees a list_t list
* @head: first element in linked list
*/
void free_list(list_t *head)
{
	list_t *curr = head;
	list_t *next;

	while (curr != NULL)
	{
		next = curr->next;
		free(curr->str);
		free(curr);
		curr = next;
	}
}

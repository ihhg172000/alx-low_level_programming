#include "lists.h"

/**
* list_len - function that the number of elements in a linked list_t list
* @h: first element in linked list
*
* Return: the number of elements
*/
size_t list_len(const list_t *h)
{
	const list_t *curr = h;
	size_t count = 0;

	while (curr != NULL)
	{
		count++;
		curr = curr->next;
	}

	return (count);
}

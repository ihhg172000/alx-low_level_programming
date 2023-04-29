#include "lists.h"

/**
* listint_len - function returns the number of elements in a listint_t list
* @h: first element in the list
*
* Return: the number of nodes
*/
size_t listint_len(const listint_t *h)
{
	const listint_t *curr = h;
	size_t count;

	for (count = 0; curr != NULL; count++)
		curr = curr->next;

	return (count);
}

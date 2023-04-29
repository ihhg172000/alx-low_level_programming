#include "lists.h"

/**
* print_listint - function prints all the elements of a listint_t list
* @h: first element in the list
*
* Return: the number of nodes
*/
size_t print_listint(const listint_t *h)
{
	const listint_t *curr = h;
	size_t count;

	for (count = 0; curr != NULL; count++)
	{
		printf("%d\n", curr->n);
		curr = curr->next;
	}

	return (count);
}

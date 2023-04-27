#include "lists.h"

/**
* print_list - function prints all the elements of a list_t list.
* @h: first element in linked list
*
* Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
	const list_t *curr = h;
	size_t count = 0;

	while (curr != NULL)
	{
		if (curr->str != NULL)
			printf("[%u] %s\n", curr->len, curr->str);
		else
			printf("[%u] %s\n", 0, "(nil)");

		count++;
		curr = curr->next;
	}

	return (count);
}

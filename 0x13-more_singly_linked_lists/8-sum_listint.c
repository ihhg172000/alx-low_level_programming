#include "lists.h"

/**
* sum_listint - function returns sum of all the data of a listint_t linked list
* @head: first node in linked list
*
* Return: sum of all the data of a listint_t linked list
*/
int sum_listint(listint_t *head)
{
	listint_t *curr = head;
	int sum = 0;

	while (curr != NULL)
	{
		sum += curr->n;
		curr = curr->next;
	}

	return (sum);
}

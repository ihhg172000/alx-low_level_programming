#include "lists.h"

/**
* pop_listint - function deletes the head node of a listint_t linked list
* @head: pointer to the head node of a listint_t linked list
*
* Return: he head node’s data (n)
*/
int pop_listint(listint_t **head)
{
	listint_t *curr, *next;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	curr = *head;
	next = (*head)->next;
	n = curr->n;

	free(*head);

	*head = next;

	return (n);
}

#include "lists.h"

/**
* add_nodeint - function adds a new node at the beginning of a listint_t list
* @head: pointer to first element in the list
* @n: number to be add to the list
*
* Return: the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	new->next = *head;
	*head = new;

	return (new);
}

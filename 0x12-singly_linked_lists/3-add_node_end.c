#include "lists.h"

/**
* add_node_end - function adds a new node at the end of a list_t list
* @head: first element in linked list
* @str: string to be add to list
*
* Return: the address of the new element
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tail = *head;
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	while (tail->next != NULL)
		tail = tail->next;

	tail->next = new;

	return (new);
}

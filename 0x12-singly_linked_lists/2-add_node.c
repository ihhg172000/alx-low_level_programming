#include "lists.h"

/**
* add_node - function adds a new node at the beginning of a list_t list
* @head: first element in linked list
* @str: string to be add to list
*
* Return: the address of the new element
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);

	new->next = *head;
	*head = new;

	return (new);
}

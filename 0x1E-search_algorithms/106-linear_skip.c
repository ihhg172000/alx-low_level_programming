#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_skip - searches for a value in a sorted skip list of integers
 * @list: a pointer to the head of the skip list to search in
 * @value: the value to search for
 *
 * Return:
 *	a pointer on the first node where value is located,
 *	NULL If value is not present in list or if head is NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *temp = list;

	if (!list)
		return (NULL);

	while (1)
	{
		temp = list;

		if (list->express)
			list = list->express;
		else
			while (list->next)
				list = list->next;

		printf("Value checked at index [%lu] = [%d]\n",
			list->index, list->n);

		if (!(list->next) || list->n > value)
			break;
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
		temp->index, list->index);

	while (temp != list->next)
	{
		printf("Value checked at index [%lu] = [%d]\n",
			temp->index, temp->n);

		if (temp->n == value)
			return (temp);

		temp = temp->next;
	}

	return (NULL);
}

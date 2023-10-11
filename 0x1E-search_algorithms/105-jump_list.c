#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_list - searches for a value in a sorted list of integers
 * @list: a pointer to the head of the list to search in
 * @size: the number of nodes in list
 * @value: the value to search for
 *
 * Return:
 *	a pointer to the first node where value is located,
 *	or NULL If value is not present in head or if head is NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step = sqrt(size), low = 0, high = step, i;
	listint_t *temp = list;

	if (!list)
		return (NULL);

	for (i = 0; list->next && i < high; i++)
		list = list->next;

	while (low < high)
	{
		printf("Value checked at index [%lu] = [%d]\n", high, list->n);
		if (high < size && list->n < value)
		{
			low = high;
			high += step;
			temp = list;

			for (i = low; list->next && i < high; i++)
				list = list->next;
		}
		else
		{
			if (high >= size)
				high = size - 1;

			printf("Value found between indexes [%lu] and [%lu]\n", low, high);
			for (; temp && low <= high; low++)
			{
				printf("Value checked at index [%lu] = [%d]\n", low, temp->n);
				if (temp->n == value)
					return (temp);

				temp = temp->next;
			}
		}
	}

	return (NULL);
}

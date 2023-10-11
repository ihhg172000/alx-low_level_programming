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
	size_t step = sqrt(size), low = 0, high = 0, i;
	listint_t *follower = list;

	if (!list)
		return (NULL);

	for (; list->next && high < step; high++)
		list = list->next;

	while (low < high)
	{
		printf("Value checked at index [%lu] = [%d]\n", high, list->n);
		if (high < size - 1 && list->n < value)
		{
			low = high;
			follower = list;
			high = high + step >= size ? size - 1 : high + step;

			for (i = low; list->next && i < high; i++)
				list = list->next;

			continue;
		}

		printf("Value found between indexes [%lu] and [%lu]\n", low, high);

		for (; follower && low <= high; low++, follower = follower->next)
		{
			printf("Value checked at index [%lu] = [%d]\n", low, follower->n);
			if (follower->n == value)
				return (follower);
		}
	}

	return (NULL);
}

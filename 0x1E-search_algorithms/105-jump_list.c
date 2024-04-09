#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted singly linked list
 *             of integers using jump search.
 * @list: A pointer to the head of the linked list to search.
 * @size: The number of nodes in the list.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the head of the list is NULL, NULL.
 *         Otherwise, a pointer to the first node where the value is located.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, step_size;
	listint_t *node, *jump;

	/* Check if the list is NULL or empty */
	if (list == NULL || size == 0)
		return (NULL);

	step = 0;

	/* Calculate the jump step size */
	step_size = sqrt(size);

	for (node = jump = list; jump->index + 1 < size && jump->n < value;)
	{
		/* Store the previous jump node */
		node = jump;

		for (step += step_size; jump->index < step; jump = jump->next)
		{
			/* If reached the end of the list */
			if (jump->index + 1 == size)
				break;
		}

		printf("Value checked at index [%ld] = [%d]\n", jump->index, jump->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			node->index, jump->index);

	for (; node->index < jump->index && node->n < value; node = node->next)
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	return (node->n == value ? node : NULL);
}


0x1E-search_algorithms/106-linear_skip.c

#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted singly linked list
 *               of integers using linear skip.
 * @list: A pointer to the head of the linked list to search.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the head of the list is NULL, NULL.
 *         Otherwise, a pointer to the first node where the value is located.
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node, *jump;

	/* Check if the list is NULL */
	if (list == NULL)
		return (NULL);

	/* Perform linear skip */
	for (node = jump = list; jump->next != NULL && jump->n < value;)
	{
		/* Store the previous jump node */
		node = jump;

		/* If the express lane is available */
		if (jump->express != NULL)
		{
			/* Jump to the next express node */
			jump = jump->express;

			printf("Value checked at index [%ld] = [%d]\n", jump->index, jump->n);
		}
		else
		{
			/* Traverse to the end of the list */
			while (jump->next != NULL)
				/* Move to the next node in the list */
				jump = jump->next;
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			node->index, jump->index);

	/*  performs a linear search, checking each */
	/*  node's value to find the target value */
	for (; node->index < jump->index && node->n < value; node = node->next)
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	return (node->n == value ? node : NULL);
}

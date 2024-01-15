#include "sort.h"

/**
 * insertion_sort_list - Sorts doubly linked list of ints in ascending
 * order using the Insertion sort algorithm.
 *
 * @list: pointer to a pointer to the head of the linked list.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *first = NULL, *center = NULL, *sec = NULL;

	if (list == NULL || (*list)->next == NULL)
		return;

	center = (*list)->next;
	while (center != NULL)
	{
		sec = center->next;
		first = center->prev;

		while (first != NULL && first->n > center->n)
		{
			if (first->prev != NULL)
				first->prev->next = center;

			if (center->next != NULL)
				center->next->prev = first;

			first->next = center->next;
			center->prev = first->prev;
			first->prev = center;
			center->next = first;

			if (*list == first)
				*list = center;

			print_list(*list);

			first = center->prev;
		}
		center = sec;
	}
}

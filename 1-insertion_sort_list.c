#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list via insertion sort
 *
 * @list: doubly linked list to be sorted
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *sorted, *current, *next;

	if (list && *list && (*list)->next) /*check if list is empty & has value*/
	{
		sorted = *list;
		current = sorted->next;
		next = current->next;

		while (current) /*while list exists*/
		{
			if (sorted->n > current->n)
			{
				swap_list(sorted, current, next, list);
			}
			current = next;
			if (current)
			{
				sorted = current->prev;
				next = current->next;
			}
		}
	}
}

/**
 * swap_list - swaps two nodes in a doubly linked list
 *
 * @std: pointer to end of sorted list
 * @curnt: pointer to node that is to be shifted
 * @nxt: pointer to first node of unsorted list
 */
void swap_list(listint_t *std, listint_t *cur, listint_t *nxt, listint_t **list)
{
	while (std->n > cur->n && std)
	{
		if (nxt)
			nxt->prev = std;
		cur->next = std;
		cur->prev = std->prev;
		if (std->prev)
			(std->prev)->next = cur;
		std->prev = cur;
		std->next = nxt;

		if ((*list)->prev) /*move head to new node*/
			*list = (*list)->prev;
		
		print_list(*list);	
	}
}

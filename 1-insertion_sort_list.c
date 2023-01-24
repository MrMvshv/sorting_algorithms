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
 * swap_list - swaps the position of two nodes in a linked list
 *
 * @pn: pointer to end of sorted list
 * @temp: pointer to node that is to be shifted
 * @nxt: pointer to first node of unsorted list
 * @h: head of doubly linked list
 */
void swap_list(listint_t *pn, listint_t *temp, listint_t *nxt, listint_t **h)
{

	while (pn && temp->n < pn->n)
	{
		if (nxt)
			nxt->prev = pn;
		temp->next = pn;
		temp->prev = pn->prev;
		if (pn->prev)
			(pn->prev)->next = temp;
		pn->prev = temp;
		pn->next = nxt;
		nxt = pn;
		pn = temp->prev;

		if ((*h)->prev) /*move head to new node*/
			*h = (*h)->prev;
		print_list(*h);
	}
}

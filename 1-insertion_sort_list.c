#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insertion_sort_list - function to sort an array of ints in ascending order
 * @list: pointer to pointer to struct list
 * Return: void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *temp;

	if (*list == NULL || (*list)->next == NULL)
		return;


	current = (*list)->next;

	while (current != NULL)
	{
		temp = current->next;

		while (current->prev != NULL && current->n < current->prev->n)
		{
			current->prev->next = current->next;
			if (current->next != NULL)
			{
				current->next->prev = current->prev;
			}
			current->next = current->prev;
			current->prev = current->prev->prev;
			current->next->prev = current;

			if (current->prev == NULL)
				*list = current;
			else
				current->prev->next = current;
			print_list(*list);
		}
		current = temp;
	}
}

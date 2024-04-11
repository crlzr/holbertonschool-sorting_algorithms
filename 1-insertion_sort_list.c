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

	listint_t *current_node;
	listint_t *comparing_node;
	listint_t *temp;

	current_node = (*list); /* set current node to index 0 */
	while (current_node != NULL)
	{
		comparing_node = current_node->next; /* set comparing_node to index 2 */
	
		while (comparing_node != NULL && comparing_node->n < current_node->n)
		{
			temp = comparing_node;
			comparing_node = current_node;
			current_node = temp;

			comparing_node->next = current_node;
			current_node->prev = comparing_node;
		}
	}
	print_list(*list);

}

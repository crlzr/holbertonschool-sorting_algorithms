#include <stdio.h>
#include "sort.h"
#include <stdlib.h>

/**
 * selection_sort - sort an array ascending order
 * @array: array to be sorted
 * @size: size of array
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
	size_t i = 0;
	size_t j = 0;
	size_t min_idx;
	int temp;
	int flag = 0;

	/* loop through array */
	for (i = 0; i < size; i++)
	{
		/* find the minimum element in unsorted array */
		min_idx = i;
		flag = 0; /* flag counts the swaps */
		for (j = i + 1; j < size; j++)
		{
			if ((array[j]) < (array[min_idx]))
			{
				min_idx = j;
				flag = flag + 1;
			}
		}
			/* swap */
			temp = array[i];
			array[i] = array[min_idx];
			array[min_idx] = temp;

			if (flag != 0) /* no swap has happened, therefore end of swapping */
				print_array(array, size);
	}
}

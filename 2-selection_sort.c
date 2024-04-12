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

	for (i = 0; i < size - 1; i++)
	{
		/* find the minimum element in unsorted array */
		min_idx = i;

		for (j = i + 1; j < size; j++)
		{
			if ((array[j]) < (array[min_idx]))
			{
				min_idx = j;
			}

			/* swap */

			if (min_idx != i)
			{
				temp = array[i];
				array[i] = array[min_idx];
				array[min_idx] = temp;
			}
			print_array(array, size);
		}
	}
}
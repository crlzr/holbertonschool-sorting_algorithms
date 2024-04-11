#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * bubble_sort - function to sort an array of integers in ascending order
 * @array: array of integers
 * @size: representing the size of the array
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	size_t i = 0;
	size_t j = 0;
	size_t temp = 0;

	if (array == NULL)
		return;
	/* i iterates through loop until end (size - 1 because zero-indexed */
	for (i = 0; i < size - 1; i++)
	{
		/* iterates through array and swaps adjacent numbers */
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}

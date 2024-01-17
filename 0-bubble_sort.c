#include "sort.h"

/**
 * bubble_sort - Sorts int array in ascending order using Bubble Sort
 *
 * @array: pointer to array sorted
 * @size: number of elements in array
 *
 */

void bubble_sort(int *array, size_t size)
{
	size_t i = 0, j = 0;
	int tmp_for_swap = 0;

	if (array == NULL || size == 0)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp_for_swap = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp_for_swap;
				print_array(array, size);
			}
		}
	}

}

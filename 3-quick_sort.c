#include "sort.h"

/**
 * quick_sort - Sorts an array of integers in
 * ascending order using Quick sort
 * @array: Pointer to the array to be sorted
 * @size: Size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quick_sort_recursive(array, 0, size - 1, size);
}

/**
 * quick_sort_recursive - Recursive helper function
 * for Quick sort
 * @array: Pointer to the array to be sorted
 * @low: Starting index of the partition
 * @high: Ending index of the partition
 * @size: Size of the array
 */
void quick_sort_recursive(int *array, int low, int high, size_t size)
{
	int pivot;

	if (low < high)
	{
		pivot = lomuto_partition(array, low, high, size);
		quick_sort_recursive(array, low, pivot - 1, size);
		quick_sort_recursive(array, pivot + 1, high, size);
	}
}

/**
 * lomuto_partition - Lomuto partition scheme
 * for Quick sort
 * @array: Pointer to the array to be sorted
 * @low: Starting index of the partition
 * @high: Ending index of the partition
 * @size: Size of the array
 * Return: Index of the pivot after partitioning
 */
int lomuto_partition(int *array, int low, int high, size_t size)
{
	int i = 0, j = 0;
	int pivot = 0;

	i = low - 1;
	pivot = array[high];

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				swap(array, i, j);
				print_array(array, size);
			}
		}
	}
	if (array[i + 1] != array[high])
	{
		swap(array, i + 1, high);
		print_array(array, size);
	}
	return (i + 1);
}

/**
 * swap - Swaps two integers
 *
 * @array: array of ints
 * @a: Pointer to the first integer
 * @b: Pointer to the second integer
 */
void swap(int *array, int a, int b)
{
	int temp = 0;

	temp = array[a];
	array[a] = array[b];
	array[b] = temp;
}

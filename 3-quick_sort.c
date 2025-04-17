#include "sort.h"

/**
 * lomuto_partition - quicksort recursive function
 * @array: pointer to the array
 * @low: lower bound
 * @high: upper bound
 * @size: size of the array
 * Return: int
 */
int lomuto_partition(int *array, int low, int high, int size)
{
	int pivot, i, j, temp;

	pivot = array[high];
	i = low;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] <= pivot)
		{
			if (i != j)
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
			i++;
		}
	}
	if (i != high)
	{
		temp = array[i];
		array[i] = array[high];
		array[high] = temp;
		print_array(array, size);
	}
	return (i);
}

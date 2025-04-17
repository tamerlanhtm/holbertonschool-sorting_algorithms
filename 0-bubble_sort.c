#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 *
 * @array: intiger array to sort
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i = 0;
	size_t j = 0;
	int stop = 0;

	while (i < size - 1)
	{
		while (j < size - i - 1)
		{
			stop = 0;

			if (array[j] > array[j + 1])
			{
				array[j] = array[j] + array[j + 1];
				array[j + 1] = array[j] - array[j + 1];
				array[j] = array[j] - array[j + 1];
				print_array(array, size);
				stop = 1;
			}

			j++;
		}

		if (!stop)
		return;

		i++;
		j = 0;
	}
}

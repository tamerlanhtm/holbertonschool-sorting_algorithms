#include "sort.h"

/**
 * selection_sort -  sorts an array of integers in ascending order
 * using the Selection sort algorithm
 *
 * @array: intiger array to sort
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i = 0;
	size_t j = 0;
	size_t index_min_element;
	int temp;

	while (i < size)
	{
		j = i + 1;
		index_min_element = i;

		while (j < size)
		{
			if (array[j] < array[index_min_element])
				index_min_element = j;

			j++;
		}

		if (index_min_element != i)
		{
			temp = array[i];
			array[i] = array[index_min_element];
			array[index_min_element] = temp;
			print_array(array, size);
		}

		i++;
	}
}

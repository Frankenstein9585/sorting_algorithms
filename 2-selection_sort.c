#include "sort.h"
/**
  * selection_sort - implements the selection sort algorithm
  *
  * @array: Array to be sorted
  * @size: size of the array
  */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min;

	for (i = 0; i < size - 1; i++)
	{
		/* this stores the index of the first element in the unsorted array */
		min = i;

		/* traverse the unsorted part of the array */
		for (j = i + 1; j < size; j++)
		{
			/* find the smallest element of the unsorted array */
			if (array[j] < array[i])
				/* update min to hold the index of the smallest element */
				min = j;
		}

		/* check that min and i don't have the same index */
		if (min != i)
			/* swap the smallest element with the first element in the unsorted array */
			swap(&array[i], &array[min]);

		print_array(array, size);
	}
}

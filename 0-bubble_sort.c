#include "sort.h"
/**
  * swap - swaps elements in an array
  * @x: array element
  * @y: array element
  */
void swap(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

/**
  * bubble_sort - implements the bubble sort algorithm
  * @arr: array to be implemented
  * @n: size of the array
  */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	for (i = 0; i < size - 1; ++i)
	{
		for (j = 0; j < size - i - 1; ++j)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
	}
}

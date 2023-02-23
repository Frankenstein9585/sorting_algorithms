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
void bubble_sort(int arr[], int n)
{
	int i, j;

	for (i = 0; i < n - 1; ++i)
	{
		for (j = 0; j < n - i - 1; ++j)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(&arr[j], &arr[j + 1]);
				print_array(arr, n);
			}
		}
	}
}

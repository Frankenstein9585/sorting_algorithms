include "sort.h"
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

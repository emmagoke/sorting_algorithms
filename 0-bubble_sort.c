#include "sort.h"

/**
 * bubble_sort - This function sorts an array of integers in
 * ascending order using the Bubble sort algorithm.
 * @array: The array to be sorted
 * @size: The size of the array.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp, swap;

	if (size < 2)
		return;
	for (i = 1; i < size; i++)
	{
		swap = 0;
		for (j = 0; j < (size - i); j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
				swap = 1;
			}
		}
		if (swap == 0)
			return;
	}
}

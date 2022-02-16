#include "sort.h"
/**
 * selection_sort - sorts an array of integers in ascending order
 *
 * @array: array to order
 * @size: size of array.
 *
 */

void selection_sort(int *array, size_t size)

{
	size_t temp = 0, smallest = 0, i = 0, j = 0, swap = 0;

	for (i = 1; i < size; i++)
	{
		swap = 0;
		smallest = i - 1;

		for (j = i; j < size; j++)
		{
			if (array[j] < array[smallest])
			{
				smallest = j;
				swap = 1;
			}
		}

		if (swap == 1)
		{
			temp = array[i - 1];
			array[i - 1] = array[smallest];
			array[smallest] = temp;

			print_array(array, size);
		}
	}
}

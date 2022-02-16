#include "sort.h"

/**
 * quick_sort - function that sorts an array of ints in ascending order
 * using quick sort algorithm
 * @array: array
 * @size: size of array
 * Return: void
 */

void quick_sort(int *array, size_t size)
{
	int low;
	int high;

	if (array == NULL || size == 0)
		return;

	high = size - 1;

	sorts(array, low, high, size);
}

/**
 * sorts - sorts array using low / high positions
 * @array: array
 * @low: first index of array
 * @high: last index of array
 * @size: size of array
 * Return: void
 */
void sorts(int *array, int low, int high, size_t size)
{
	int i;

	if (low < high)
	{
		i = part(array, low, high, size);
		sorts(array, low, i - 1, size);
		sorts(array, i + 1, high, size);
	}
}

/**
 * part - sections of array quick_sort
 *
 * @array: array
 * @low: first index of array
 * @high: lowest index of array
 * @size: size of array
 *
 * Return: i
 *
 */

int part(int *array, int low, int high, size_t size)
{
	int pivot;
	int i;
	int j;

	pivot = array[high];
	i = low - 1;

	for (j = low; j <= high; j++)
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
	return (i);
}

/**
 * swap - change values in array
 *
 * @array: array
 * @i: 1 pt
 * @j: 2 pt
 * Return: void.
 */
void swap(int *array, int i, int j)
{
	int change;

	change = array[i];
	array[i] = array[j];
	array[j] = change;
}

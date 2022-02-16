#include "sort.h"

/**
 * shell_sort - sorts an array of integers in ascending order using the
 * Shell sort algorithm
 * @array: array to sort
 * @size: size of the array to sort
 *
 * Return: void
 */
void shell_sort(int *array, size_t size)
{
	size_t i, j, tmp = 1;
	int insert;

	if (array == NULL || size < 2)
		return;

	while (tmp < size / 3)
		tmp = tmp * 3 + 1;

	while (tmp > 0)
	{
		for (i = tmp; i < size; i++)
		{
			insert = array[i];
			for (j = i; j >= tmp && array[j - tmp] > insert; j = j - tmp)
				array[j] = array[j - tmp];
			array[j] = insert;
		}
		tmp = (tmp - 1) / 3;
		print_array(array, size);
	}
}

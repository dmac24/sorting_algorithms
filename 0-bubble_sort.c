#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order.
 * @array: array.
 * @size: size of array
 *
 * return: always 0.
 */


void bubble_sort(int *array, size_t size)
{
	unsigned int i;
	unsigned int j = 0;

	if (size < 2)
		return;

	for (i = 0; i < (size - 1); i++)
	{
		for (j = 1; j < size; j++)
		{
			if (array[j - 1] > array[j])
			{
				cg(&array[j - 1], &array[j]);
				print_array(array, size);
			}
		}
	}
}

/**
 * cg - change two pointers to integer
 *
 * @a: 1 pt
 * @b: 2 pt
 */

void cg(int *a, int *b)
{
	int change;

	change = *a;
	*a = *b;
	*b = change;
}

#include "sort.h"

/**
 * bubble_sort - function that sorts an array of integers
 * in ascending order using the bubble sort algorithm.
 *
 * @array: array of integers to be sorted
 * @size: size of the array
 */

void bubble_sort(int *array, size_t size)
{
	size_t j, i;
	int flag, tmp;

	if (!array || !size)
		return;

	for (j = 0; j < size - 1; j++)
	{
		flag = 0;
		for (i = 0 ; i < (size - j - 1); i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				flag = 1;
				print_array(array, size);
			}
		}
		if (flag == 0)
			break;
	}
}

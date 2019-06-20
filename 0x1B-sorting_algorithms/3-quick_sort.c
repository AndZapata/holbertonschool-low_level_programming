#include "sort.h"
/**
 * func_pivot - select the pivot number as lumo\
to function
 *
 * @array: List of integers to be sorted
 * @init: First element in the array
 * @last: Last element in the array
 * @size: Length of the array
 * Return: Nothing
 */
int func_pivot(int *array, int first, int last, size_t size)
{
	int num, j, tmp;
	int pivot;

	num = first - 1;
	pivot = array[last];
	for (j = first; j <= last - 1; j++)
	{
		if (array[j] <= pivot)
		{
			num++;
			if (num != j)
			{
				tmp = array[num];
				array[num] = array[j];
				array[j] = tmp;
				print_array(array, size);
			}
		}
	}
	if (array[last] < array[num + 1])
	{
		tmp = array[last];
		array[last] = array[num + 1];
		array[num + 1] = tmp;
		print_array(array, size);
	}
	return (num + 1);
}

/**
 * partition - Function to separates the array in sub arrays to be sorted
 *
 * @array: List of integers to be sorted
 * @first: First element in the selected sub array
 * @last: Last integer in the selected sub array
 * @size: lenght of the array
 * Return: Nothing
 */
void partition(int *array, int first, int last, size_t size)
{
	int num;

	if (first < last)
	{
		num = func_pivot(array, first, last, size);
		partition(array, first, num - 1, size);
		partition(array, num + 1, last, size);
	}
}

/**
 * quick_sort - Comment
 *
 * @array: comment
 * @size: Comment
 * Return: Nothing
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	partition(array, 0, size - 1, size);
}

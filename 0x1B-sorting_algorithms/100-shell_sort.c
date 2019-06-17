#include "sort.h"

/**
 * shell_sort - function that sorts an array of integers
 * in ascending order using the Shell sort algorithm
 *
 * @array: List of integers to be sorted
 * @size: Lenght of the array
 * Return: Nothing
 */
void shell_sort(int *array, size_t size)
{
	size_t i, j, n = 1;
	int temp;

	if (size < 2)
		return;
	while (n < size)
		n = n * 3 + 1;
	n = (n - 1) / 3;
	for (; n > 0; n = (n - 1) / 3)
	{
		for (i = n; i < size; i++)
		{
			temp = array[i];
			for (j = i; j >= n && array[j - n] > temp; j = j - n)
				array[j] = array[j - n];
			array[j] = temp;
		}
		print_array(array, size);
	}
}

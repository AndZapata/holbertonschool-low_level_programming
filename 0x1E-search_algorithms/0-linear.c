#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value:  value to search for
 * Return: index or -1 if failed
 */

int linear_search(int *array, size_t size, int value)
{
	size_t idx = 0;

	if (!array)
		return (-1);
	while (idx < size)
	{
		printf("Value checked array[%zu] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
			return (idx);
		idx++;
	}
	return (-1);
}

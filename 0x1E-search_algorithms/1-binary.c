#include "search_algos.h"

/**
 * binary_search - searches a value in a sorted array using the Binary s. alg
 *
 * @array: pointer to the first element of the array to search
 * @size: number of elements in array
 * @value: value to search for
 * Return: value found or -1 if failed
 */

int binary_search(int *array, size_t size, int value)
{
	size_t start = 0, end = 0, mid = 0, i = 0;

	if (!array || !size)
		return (-1);
	end = size - 1;
	while (start <= end)
	{
		printf("Searching in array: ");
		for (i = start; i < end; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[end]);
		mid = (start + end) / 2;
		if (array[mid] < value)
			start = mid + 1;
		else if (array[mid] > value)
			end = mid - 1;
		else
			return (mid);
	}
	return (-1);
}

#include "sort.h"
/**
 * maximum - function that search for the maximum integer
 *
 * @array: List of integers to be sorted
 * @size: lenght of the array
 * Return: Nothing
 */
size_t maximum(int *array, int size)
{

	int i = 0;
	int max = 0;

	for (i = 0; i < size; i++)
	{
		if (array[i] > max)
		{
			max = array[i];
		}
	}

	return ((size_t)max);
}

/**
 * counting_sort - function that sorts an array of integers
 * in ascending order using the Counting sort algorithm
 *
 * @array: List of integers to be sorted
 * @size: lenght of the array
 * Return: Nothing
 */
void counting_sort(int *array, size_t size)
{

	size_t i, max = maximum(array, size);
	int counting_array[10000];
	int array2[10000];
	int num = 0, tmp;

	for (i = 0; i < 10000 - 1; i++)
		counting_array[i] = '\0';

	if (!array || size < 2)
		return;
	for (i = 0; i < size; i++)
		counting_array[array[i]]++;
	for (i = 0; i < size; i++)
		array2[array[i]]++;
	for (i = 0; i <= max; i++)
	{
		tmp = counting_array[i];
		counting_array[i] += num;
		num += tmp;
	}
	print_array(counting_array, max + 1);
	num = 0;
	i = 0;
	while (i < size)
	{
		while (array2[num] > 0)
		{
			array[i] = num;
			array2[num]--;
			i++;
			if (i > size)
			{
				break;
			}
		}
		num++;
	}
}

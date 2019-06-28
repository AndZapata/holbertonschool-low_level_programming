#include "sort.h"

/**
 * prf - function to print in merge format
 * @array: List of integers to be sorted
 * @buf: buffer to keep enought space to the list
 * @lf: Left partition
 * @mdlf: midium to left position
 * @rg: Right partition
 * @mdrg: medium to right position
 *
 * Return: Nothing
 */
void prf(int *array, int *buf, size_t lf, size_t mdlf, size_t rg, size_t mdrg)
{
	size_t left, sizelf, right, sizerg, i;

	left = lf;
	sizelf = mdlf - lf + 1;
	right = rg;
	sizerg = mdrg - rg + 1;
	i = lf;

	printf("Merging...\n");
	printf("[left]: ");
	print_array(array + left, sizelf);
	printf("[right]: ");
	print_array(array + right, sizerg);

	while (lf <= mdlf && rg <= mdrg)
	{
		if (array[lf] <= array[rg])
			buf[i++] = array[lf++];
		else
			buf[i++] = array[rg++];
	}
	while (lf <= mdlf)
		buf[i++] = array[lf++];
	while (rg <= mdrg)
		buf[i++] = array[rg++];

	for (i = left; i <= mdrg; i++)
		array[i] = buf[i];

	printf("[Done]: ");
	print_array(array + left, sizelf + sizerg);
}

/**
 * partition - function to creates sub lists
 * @array: List of integers to be sorted
 * @buf: buffer
 * @first: First element on each subarray
 * @last: last element on each subarray
 *
 * Return: Nothing
 */
void partition(int *array, int *buf, size_t first, size_t last)
{
	if (last > first)
	{
		partition(array, buf, first, (first + last + 1) / 2 - 1);
		partition(array, buf, (first + last + 1) / 2, last);
		prf(array, buf, first, (first + last + 1) / 2 - 1,
		      (first + last + 1) / 2, last);
	}
}

/**
 * merge_sort - function that sorts an array of integers in ascending
 * order using the Merge sort algorithm
 * @array: list of integers to be sorted
 * @size: lenght of the array
 *
 * Return: Nothing
 */
void merge_sort(int *array, size_t size)
{
	int buf[10000];

	if (!array || size < 2)
		return;
	partition(array, buf, 0, size - 1);
}

#include "sort.h"
/**
 *print - function to print the merge result
 * @a: list of integers to be sorted
 * @b: Buffer to create a sorted array
 * @first: First part of the array
 * @mid: Medium part of the array
 * @end: last part of the array
 * @end_m: Variable to take middle in a array
 * Return: Nothing
 */
void print(int *a, int *b, size_t first, size_t mid, size_t end, size_t end_m)
{
	size_t left_i, left_s, right_i, right_s, i;

	left_i = first;
	left_s = mid - first + 1;
	right_i = end;
	right_s = end_m - end + 1;
	i = first;

	printf("Merging...\n");
	printf("[left]: ");
	print_array(a + left_i, left_s);
	printf("[right]: ");
	print_array(a + right_i, right_s);

	while (first <= mid && end <= end_m)
	{
		if (a[first] <= a[end])
			b[i++] = a[first++];
		else
			b[i++] = a[end++];
	}
	while (first <= mid)
		b[i++] = a[first++];
	while (end <= end_m)
		b[i++] = a[end++];

	for (i = left_i; i <= end_m; i++)
		a[i] = b[i];

	printf("[Done]: ");
	print_array(a + left_i, left_s + right_s);
}

/**
 * merge_div - function to divide the array in parts to be sorted
 * @array: list of integers to be sorted
 * @buf: Buffer to create a sorted array
 * @first: First part of the array
 * @end: last part of the array
 * Return: Nothing
 */
void merge_div(int *array, int *buf, size_t first, size_t end)
{
	if (end > first)
	{
		merge_div(array, buf, first, (first + end + 1) / 2 - 1);
		merge_div(array, buf, (first + end + 1) / 2, end);
		print(array, buf, first, (first + end + 1) / 2 - 1,
		      (first + end + 1) / 2, end);
	}
}

/**
 * merge_sort - function to sort in merge algorithm
 * @array: list of integers to be sorted
 * @size: lenght of the array
 * Return: Nothing
 */
void merge_sort(int *array, size_t size)
{
	int buf[10000];

	if (!array || size < 2)
		return;
	merge_div(array, buf, 0, size - 1);
}

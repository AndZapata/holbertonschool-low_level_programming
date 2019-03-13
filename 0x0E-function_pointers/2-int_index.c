#include "function_pointers.h"

/**
 * int_index - search for an integer in the index
 * @array: array that cames from main.c
 * @size: indexed numbers
 * @cmp: the function that execute the function
 *
 * Return: Always 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL)
		return (-1);
	if (cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}

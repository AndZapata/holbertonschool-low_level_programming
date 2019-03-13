#include "function_pointers.h"

/**
 * array_iterator - function that execute a function
 * @array: array that cames from main.c
 * @size: size of the array
 * @action: the function that execute the function
 *
 * Return: Always 0.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}

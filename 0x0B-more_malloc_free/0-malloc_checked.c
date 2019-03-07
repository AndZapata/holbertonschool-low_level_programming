#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - function that allocate memory.
 * @b: an integer that cames from main.c
 * Return: Always 0.
 */
void *malloc_checked(unsigned int b)
{
	int *x;

	x = malloc(b);
	if (x == 0)
		exit(98);
	return (x);
}

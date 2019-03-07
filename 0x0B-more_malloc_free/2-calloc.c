#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - concatenates two strings.
 * @nmemb: numbers of elements
 * @size: size of the elements
 * Return: Always 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *x;
	unsigned int y;

	if ((size == 0) || (nmemb == 0))
		return (0);
	x = malloc(nmemb * size * sizeof(unsigned int));
	if (x == 0)
		return (0);
	for (y = 0; y < (nmemb * size); y++)
		x[y] = '\0';
	return (x);
}

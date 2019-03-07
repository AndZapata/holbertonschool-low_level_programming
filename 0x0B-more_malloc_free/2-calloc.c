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
	int *x;
	int y;

	if ((size == 0) || (nmemb == 0))
		return (0);
	x = malloc(nmemb * size);
	if (x == 0)
		return (0);
	for (y = 0; x[y]; y++)
		x = '\0';
	return (x);
}

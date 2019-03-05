#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @c: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *b;

	if (size == 0)
		return (0);
	b = malloc(size * sizeof(c));
	if (b == 0)
		return (0);
	for (i = 0; i < size; i++)
		b[i] = c;
	return (b);
}

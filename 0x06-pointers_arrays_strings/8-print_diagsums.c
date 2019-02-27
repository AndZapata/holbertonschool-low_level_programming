#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - locates part of a string
 * @a: are files
 * @size: are size of the matrix
 *
 * Return: haystack + len
 */
void print_diagsums(int *a, int size)
{
	int x, sum = 0, sum2 = 0;

	for (x = 0; x < size; x++)
	{
		sum = sum + a[x * (size + 1)];
		sum2 = sum2 + a[(x + 1) * (size - 1)];
	}
	printf("%d, %d\n", sum, sum2);
}

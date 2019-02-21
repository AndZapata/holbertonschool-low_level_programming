#include "holberton.h"
/**
 * reverse_array - integrals in reverse
 *@a: Array
 *@n: length
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
	int temp = 0;
	int i;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}

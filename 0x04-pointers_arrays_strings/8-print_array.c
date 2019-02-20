#include "holberton.h"
#include <stdio.h>
/**
 * print_array - print array
 *@a: pointer
 *@n: variable that cames from main.c
 * Return: Always 0.
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);
		if (x < n - 1)
			printf(", ");
	}
	putchar(10);
}

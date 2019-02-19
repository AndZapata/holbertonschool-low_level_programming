#include "holberton.h"

/**
 * swap_int - swap the value of the a and b pointer
 *@a: Number that cames from main.c
 *@b: Number that cames from main.c
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int mem_a;

	mem_a = *a;
	*a = *b;
	*b = mem_a;
}

#include "holberton.h"
/**
 * aux - does the natural square
 * @n: is a integer
 * @x: counter
 * Return: always 0
 */

int aux(int x, int n)
{
	if (x * x == n)
		return (x);
	else if (n < 0)
		return (-1);
	else if (x * x < n)
		return (aux(x + 1, n));
	else
		return (-1);
	return (0);
}

/**
 * _sqrt_recursion - prints and call the aux function
 * @n: a variable called from the other function
 * Return: Always 0.
 */

int _sqrt_recursion(int n)
{
	return (aux(1, n));
}

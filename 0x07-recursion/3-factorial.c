#include "holberton.h"
/**
 * factorial - prints a factorial
 * @n: is a integer
 * Return: Always 0.
 */
int factorial(int n)
{

	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}

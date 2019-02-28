#include "holberton.h"
/**
 * _sqrt_recursion - prints the natural square
 * @n: is a integer
 *
 * Return: always 0
 */
int _sqrt_recursion(int n)
{

	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * (_sqrt_recursion(n - 1)));
}

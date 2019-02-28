#include "holberton.h"
/**
 * _sqrt_recursion - prints the natural square
 * @n: is a integer
 *
 * Return: always 0
 */
int _sqrt_recursion(int n)
{

	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	return (x * (_sqrt_recursion(x, y - 1)));
}

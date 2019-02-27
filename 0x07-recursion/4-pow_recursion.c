#include "holberton.h"
/**
 * _pow_recursion - prints a factorial
 * @x: is a integer
 * @y: is the pow
 * Return: always 0
 */
int _pow_recursion(int x, int y)
{

	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	return (x * (_pow_recursion(x, y - 1)));
}

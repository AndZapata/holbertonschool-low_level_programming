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

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: is the string of binary numbers
 *
 * Return: always 0
 */
unsigned int binary_to_uint(const char *b)
{
	int len, i, k = 0;
	unsigned int sum = 0;

	if (!b)
		return (0);
	for (len = 0; b[len]; len++)
	{ }
	for (i = 0; i < len; i++)
	{
		if (b[i] == '1')
			k = 1;
		else if (b[i] == '0')
			k = 0;
		else
			return (0);
		sum += k * (_pow_recursion(2, (len - (i + 1))));
	}
	return (sum);
}

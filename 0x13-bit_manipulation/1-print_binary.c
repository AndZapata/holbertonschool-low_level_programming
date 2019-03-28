#include "holberton.h"
/**
 * bin - recursive function to convert number in binary
 * @n: is the string of binary numbers
 *
 * Return: nothing
 */
void bin(unsigned long int n)
{
	if (n > 1)
		bin(n >> 1);
	if (n & 1)
		_putchar('1');
	else
		_putchar('0');
}

/**
 * print_binary - converts a number to a binary number
 * @n: is the string of binary numbers
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		bin(n);
}

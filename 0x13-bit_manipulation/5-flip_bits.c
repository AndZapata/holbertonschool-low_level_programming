#include "holberton.h"
/**
 * count - count a comparison betwen n and 1
 * @n: is the binary numbers
 *
 * Return: 1 if works -1 if doesn't works
 */

int count(unsigned long int n)
{
	int count = 0;

	while (n)
	{
		count += n & 1;
		n >>= 1;
	}
	return (count);
}

/**
 * flip_bits - clear a number in binary
 * @n: is the binary numbers
 * @m: the number to get
 *
 * Return: 1 if works -1 if doesn't works
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (count(n ^ m));
}

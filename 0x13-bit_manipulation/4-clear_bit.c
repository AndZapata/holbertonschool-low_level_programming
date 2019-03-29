#include "holberton.h"
/**
 * clear_bit - clear a number in binary
 * @n: is the binary numbers
 * @index: the number to get
 *
 * Return: 1 if works -1 if doesn't works
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < 64)
	{
		*n = *n & ~(1 << index);
		return (1);
	}
	return (-1);
}

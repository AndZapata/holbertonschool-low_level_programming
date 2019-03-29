#include "holberton.h"
/**
 * set_bit - recursive function to convert number in binary
 * @n: is the string of binary numbers
 * @index: the number to get
 *
 * Return: nothing
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index < 64)
	{
		*n = *n | (1 << index);
		return (1);
	}
	return (-1);
}

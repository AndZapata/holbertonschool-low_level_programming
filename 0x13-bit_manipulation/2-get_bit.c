#include "holberton.h"
/**
 * get_bit - recursive function to convert number in binary
 * @n: is the string of binary numbers
 * @index: the number to get
 *
 * Return: nothing
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index < 64)
		return ((n >> index) & 1);
	return (-1);
}

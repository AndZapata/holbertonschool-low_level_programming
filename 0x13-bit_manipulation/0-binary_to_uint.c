#include "holberton.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: is the string of binary numbers
 *
 * Return: always 0
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int sum = 0;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] == '1')
			sum = (sum << 1) | 1;
		else if (b[i] == '0')
			sum = sum << 1;
		else
			return (0);
	}
	return (sum);
}

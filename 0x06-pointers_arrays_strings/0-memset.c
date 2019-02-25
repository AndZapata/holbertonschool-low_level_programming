#include "holberton.h"
/**
 * _memset - copy a memory set of constant bytes
 * @s: address of the string
 * @b: constant value
 * @n: value to fill
 *
 * Return: Nothing.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int len;

	for (len = 0; len < n; len++)
		s[len] = b;
	return (s);
}

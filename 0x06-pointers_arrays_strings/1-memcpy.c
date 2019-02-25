#include "holberton.h"
/**
 * _memcpy - copy a string of constant bytes
 * @src: the string
 * @dest: the copy
 * @n: value to fill
 *
 * Return: Nothing.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int len;

	for (len = 0; len < n; len++)
		dest[len] = src[len];
	return (dest);
}

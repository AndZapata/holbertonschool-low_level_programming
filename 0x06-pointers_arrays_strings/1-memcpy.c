#include "holberton.h"
/**
 * _memset - copy a memory set of constant bytes
 * @src: address of the string
 * @dest: the copy
 * @n: value to fill
 *
 * Return: Nothing.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int len;

	for (len = 0; len < n && src[len]; len++)
		dest[len] = src[len];
	return (dest);
}

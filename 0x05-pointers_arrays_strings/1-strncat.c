#include "holberton.h"
/**
 * _strncat - concatenate
 *@dest: concatenate destination.
 *@src: string that cames from main.c
 *@n: size of the bytes
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int len;
	int i = 0;

	for (len = 0; dest[len]; len++)
	{
	}
	while (i < n && src[i])
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}

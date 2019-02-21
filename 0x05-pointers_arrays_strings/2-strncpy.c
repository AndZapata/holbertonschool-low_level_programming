#include "holberton.h"
/**
 * _strncpy - copy a string
 *@dest: copy destination.
 *@src: string that cames from main.c
 *@n: size of the bytes
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
	dest[i] = '\0';
	i++;
	}
	return (dest);
}

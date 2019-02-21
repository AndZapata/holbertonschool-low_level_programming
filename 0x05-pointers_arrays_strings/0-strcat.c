#include "holberton.h"
/**
 * _strcat - concatenate
 *@dest: concatenate destination.
 *@src: string that cames from main.c
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int len;
	int i = 0;

	for (len = 0; dest[len]; len++)
	{
	}
	while (src[i])
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}

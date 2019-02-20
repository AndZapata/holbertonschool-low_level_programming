#include "holberton.h"
#include <stdio.h>
/**
 * _strcpy - copy a string
 *@dest: second string
 *@src: string that cames from main.c
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

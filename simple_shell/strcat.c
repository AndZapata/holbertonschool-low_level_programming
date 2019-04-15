#include "shell.h"

/**
 * _strcat - Concatenate two strings
 * @dest: string to pass
 * @src: string to add
 *
 * Return: dest
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

#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - copy an string from main
 * @str: the address of memory to print
 *
 * Return: Nothing.
 */
char *_strdup(char *str)
{
	char *copy;
	int len;
	int y;

	if (str == 0)
		return (0);
	for (len = 0; str[len]; len++)
	{
	}
	copy = malloc(len * sizeof(char) + 1);
	if (copy == NULL)
		return (NULL);
	for (y = 0; y < len; y++)
		copy[y] = str[y];
	copy[y] = 0;
	return (copy);
}

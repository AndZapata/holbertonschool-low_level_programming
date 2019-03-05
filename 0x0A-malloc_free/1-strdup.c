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
	int l;
	char *b;

	if (*str == 0)
		return (0);

	for (l = 0; str[l]; l++)
		b = malloc(l * sizeof(char) + 1);
	for (l = 0; str[l]; l++)
		b[l] = str[l];
	if (str > b)
		return (0);
	return (b);
}

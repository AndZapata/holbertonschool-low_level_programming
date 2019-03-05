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
	int i;
	char *b;

	if (*str == 0)
		return (0);
	for (i = 0; str[i]; i++)
		b = malloc(i * sizeof(str) + 1);
	for (i = 0; str[i]; i++)
		b[i] = str[i];
	if (b == 0)
		return (0);
	return (b);
}

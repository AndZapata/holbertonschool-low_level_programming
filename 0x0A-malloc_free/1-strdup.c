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
	b = malloc(sizeof(str));
	if (b == 0)
		return (0);
	for (i = 0; str[i]; i++)
	{
		b[i] = str[i];
	}
	return (b);
}

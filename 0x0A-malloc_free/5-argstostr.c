#include "holberton.h"
#include <stdlib.h>

/**
 * argstostr - concatenates two strings
 * @ac: first string
 * @av: Second string
 * Return: Nothing.
 */
char *argstostr(int ac, char **av)
{
	char *a;
	int b, c, d = 0;

	if ((ac == 0) || (av == 0))
		return (0);
	for (b = 0; b < ac; b++)
	{
		for (c = 0; av[b][c]; c++)
		{
			d++;
		}
	}

	a = malloc(sizeof(char) * (d + ac + 1));
	d = 0;
	if (a == 0)
		return (0);
	for (b = 0; b < ac; b++)
	{
		for (c = 0; av[b][c]; c++)
		{
			a[d] = av[b][c];
			d++;
		}

		if (av[b][c] == '\0')
		{
			a[d] = '\n';
			d++;
		}
	}
	return (a);
}

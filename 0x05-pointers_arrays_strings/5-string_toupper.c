#include "holberton.h"

/**
 * string_toupper - string from lowercase to uppercase
 *@m: string from main
 *
 * Return: Always 0.
 */
char *string_toupper(char *m)
{
	int len = 0;

	while (m[len] != '\0')
	{
		if (m[len] >= 97 && m[len] <= 122)
		{
			m[len] = m[len] - 32;
		}
		len++;
	}
	return (m);
}

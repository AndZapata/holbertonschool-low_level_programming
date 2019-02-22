#include "holberton.h"

/**
 * cap_string - string from lowercase to uppercase
 *@m: string from main
 *
 * Return: Always 0.
 */
char *cap_string(char *m)
{
	int len;

	for (len = 0; m[len] != '\0'; len++)
	{
		if (m[len - 1] >= 9 && m[len - 1] <= 64)
		{
			if (m[len] >= 97 && m[len] <= 122)
			{
				m[len] = m[len] - 32;
			}
		}
	}
	return (m);
}

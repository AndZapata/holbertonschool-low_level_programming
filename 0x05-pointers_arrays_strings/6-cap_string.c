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
	int z;
	char x[] = " \n\t,;.!?\"(){}";

	for (len = 1; m[len]; len++)
	{
		for (z = 0; x[z]; z++)
		{
			if (m[len - 1] == x[z])
			{
				if (m[len] >= 97 && m[len] <= 122)
					m[len] = m[len] - 32;
			}
		}
	}
	return (m);
}

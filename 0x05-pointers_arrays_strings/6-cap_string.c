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

	for (len = 0; m[len]; len++)
	{
		if (m[0] >= 97 && m[0] <= 122)
			m[0] = m[0] - 32;
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

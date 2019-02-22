#include "holberton.h"

/**
 * leet - leet 1337
 *@m: string from main
 *
 * Return: Always 0.
 */
char *leet(char *m)
{
	int len;
	int temp;
	char lt[] = "aAeEoOtTlL";
	char nm[] = "4433007711";

	for (len = 0; m[len]; len++)
	{
		for (temp = 0; lt[temp]; temp++)
		{
			if (m[len] == lt[temp])
				m[len] = nm[temp];
		}
	}
	return (m);
}

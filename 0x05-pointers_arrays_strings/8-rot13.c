#include "holberton.h"

/**
 * rot13 - rot13 aA-zZ for nN-zZ-aA-zZ
 *@m: string from main
 *
 * Return: Always 0.
 */
char *rot13(char *m)
{
	int len;
	int temp;
	char lt[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char rot[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	for (len = 0; m[len]; len++)
	{
		for (temp = 0; lt[temp]; temp++)
		{
			if (m[len] == lt[temp])
			{
				m[len] = rot[temp];
				break;
			}
		}
	}
	return (m);
}

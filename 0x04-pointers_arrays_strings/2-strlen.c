#include "holberton.h"
#include <string.h>
/**
 * _strlen - strlen
 *@s: length that cames from main.c
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int l;

	while (s[l] != '\0')
	{
		l++;
	}
	return (l);
}

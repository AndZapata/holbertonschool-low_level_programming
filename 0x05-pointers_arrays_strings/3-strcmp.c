#include "holberton.h"
/**
 * _strcmp - compares two strings
 *@s1: first string to compare
 *@s2: Second string to compare
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

#include "holberton.h"
/**
 * _strcmp - compares two strings
 *@s1: first string to compare
 *@s2: Second string to compare
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0;

	if (s1[a] < s2[a])
		return (-15);
	else if (s1[a] > s2[a])
		return (15);
	else
		return (0);
}

#include "holberton.h"
#include <stdlib.h>
/**
 * _str_concat - concatenates two strings
 * @s1: first string
 * @s2: Second string
 * Return: Nothing.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int len1, len2, sum = 0;

	if ((s1 == 0) || (s2 == 0))
		return ("");

	for (len1 = 0; s1[len1]; len1++)
	{
	}
	for (len2 = 0; s2[len2]; len2++)
	{
	}
	sum = len1 + len2;
	concat = malloc(sum * sizeof(char) + 1);
	if (concat == NULL)
		return (NULL);
	for (len1 = 0; s1[len1]; len1++)
		concat[len1] = s1[len1];
	for (len2 = 0; s2[len2]; len2++)
		concat[len1 + len2] = s2[len2];
	return (concat);
}

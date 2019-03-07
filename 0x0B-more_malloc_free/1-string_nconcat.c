#include "holberton.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: First string
 * @s2: second string
 * @n: n bytes of second string
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int s1a, s2b, sum = 0;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	for (s1a = 0; s1[s1a]; s1a++)
	{
	}
	for (s2b = 0; s2b < n && s2[s2b]; s2b++)
	{
	}
	sum = s1a + s2b;
	concat = malloc(sizeof(char) * sum + 1);
	if (concat == 0)
		return (0);
	for (s1a = 0; s1[s1a]; s1a++)
		concat[s1a] = s1[s1a];
	for (s2b = 0; s2b < n && s2[s2b]; s2b++)
		concat[s1a + s2b] = s2[s2b];
	return (concat);
}

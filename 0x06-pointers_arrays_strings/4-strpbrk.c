#include "holberton.h"
/**
 * _strpbrk - locates a character in a string
 * @s: the string
 * @accept: character
 *
 * Return: count.
 */
char *_strpbrk(char *s, char *accept)
{
	int len;
	int len2;

	for (len = 0; s[len]; len++)
	{
		for (len2 = 0; accept[len2]; len2++)
		{
			if (s[len] == accept[len2])
				return (s + len);
		}
		if (s[len] == accept[len2])
			return (s + len);
	}
	return (0);
}

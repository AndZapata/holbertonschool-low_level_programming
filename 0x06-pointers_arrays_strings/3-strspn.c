#include "holberton.h"
/**
 * _strspn - locates a character in a string
 * @s: the string
 * @accept: character
 *
 * Return: count.
 */
unsigned int _strspn(char *s, char *accept)
{
	int len;
	int len2;
	int count = 0;

	for (len = 0; s[len]; len++)
	{
		for (len2 = 0; accept[len2]; len2++)
		{
			if (s[len] == accept[len2])
				count++;
		}
		if (len > count)
			break;
	}
	return (count);
}

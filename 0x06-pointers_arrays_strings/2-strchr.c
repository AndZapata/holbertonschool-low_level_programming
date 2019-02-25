#include "holberton.h"
/**
 * _strchr - locates a character in a string
 * @s: the string
 * @c: character
 *
 * Return: Nothing.
 */
char *_strchr(char *s, char c)
{
	for (; s[0]; s++)
	{
		if (*s == c)
			return (s);
	}
	if (s[0] == c)
	    return (s);
	return (0);
}

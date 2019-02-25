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
	int len;

	for (len = 0; s[len]; len++)
	{
		if (s[len] == c)
			return (&s[len]);
	}
	if (s[len] == '\0')
	{
		return (&s[len]);
	}
	else
		return (0);
}

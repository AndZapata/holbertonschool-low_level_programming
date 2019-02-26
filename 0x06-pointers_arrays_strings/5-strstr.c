#include "holberton.h"
#include <stdio.h>
/**
 * _strstr - locates part of a string
 * @haystack: is a pointer
 * @needle: is a pointer
 *
 * Return: haystack + len
 */
char *_strstr(char *haystack, char *needle)
{
	int len;
	int len2;

	for (len = 0; haystack[len]; len++)
	{
		for (len2 = 0; needle[len2]; len2++)
		{
			if (haystack[len] == needle[len2])
				return (haystack + len2);
		}
		if (needle[len2] == 0)
		{
		return (haystack + len2);
		}
	}
	return (0);
}

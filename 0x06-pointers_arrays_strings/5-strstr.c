#include "holberton.h"
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

	for (len2 = 0; needle[len2]; len2++)
	{
		for (len = 0; haystack[len]; len++)
		{
			if (needle[len2] == haystack[len])
				return (haystack + len);
		}
	}
	return (0);
}

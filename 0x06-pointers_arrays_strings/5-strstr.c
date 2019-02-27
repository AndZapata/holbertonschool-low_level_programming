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
	int x = 0;
	int y = 0;

	if (needle[y] == 0)
		return (haystack);
	while (haystack[x])
	{
		if (haystack[x] == needle[y])
			y++;
		else
			y = 0;
		x++;
		if (needle[y] == 0)
			return (haystack + x - y);
	}
	return (0);
}

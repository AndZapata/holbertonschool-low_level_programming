#include "holberton.h"
#include <stdio.h>
/**
 * print_chessboard - locates part of a string
 * @a: is a pointer
 *
 * Return: haystack + len
 */
void print_chessboard(char (*a)[8])
{
	unsigned int len;
	unsigned int len2;

	for (len = 0; len < 8; len++)
	{
		for (len2 = 0; len2 < 8; len2++)
		{
			_putchar(a[len][len2]);
		}
		_putchar(10);
	}
}

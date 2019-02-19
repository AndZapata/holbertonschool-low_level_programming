#include "holberton.h"

/**
 * print_rev - prints a string in reverse
 *@s: string that cames from main.c
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int p;

	while (s[p] != 0)
	{
		p++;
	}
	while (p--)
	{
		_putchar(s[p]);
	}
	_putchar(10);
}

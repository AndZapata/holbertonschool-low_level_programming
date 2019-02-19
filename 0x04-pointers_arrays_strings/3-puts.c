#include "holberton.h"

/**
 * _puts - prints a string
 *@str: string that cames from main.c
 * Return: Always 0.
 */

void _puts(char *str)
{
	int p;

	while (str[p] != '\0')
	{
		_putchar(str[p]);
		p++;
	}
	_putchar(10);
}

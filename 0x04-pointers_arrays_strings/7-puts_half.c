#include "holberton.h"

/**
 * puts_half - prints second half of a string
 *@str: string that cames from main.c
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int p;

	for (p = 0; str[p] != '\0'; p++)
	{
	}
	if (p % 2 == 0)
	{
		p = p / 2;
	}
	else
	{
	     p = (str[p] - 1) / 2;
	}
	for ( ; str[p] != '\0'; p++)
	{
		_putchar(str[p]);
	}
	_putchar(10);
}

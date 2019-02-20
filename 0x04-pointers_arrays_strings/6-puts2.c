#include "holberton.h"

/**
 * puts2 - prints all multiples of 2 from str
 *@str: string that cames from main.c
 * Return: Always 0.
 */

void puts2(char *str)
{
	int p;

	while (str[p] != '\0')
	{
		if ((p % 2) == 0)
		{
			_putchar(str[p]);
		}
		p++;
	}
	_putchar(10);
}

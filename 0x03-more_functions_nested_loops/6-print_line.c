#include "holberton.h"
/**
 * print_line - print numbers since 0 to 14
 *
 * @n: times that _ should be printed
 * Decription: will print _
 * Return: Always 0
 */
void print_line(int n)
{
	int d;

	for (d = 1; d <= n; d++)
	{
		if (d > 0)
		{
			_putchar('_');
		}
	}
	_putchar(10);
}

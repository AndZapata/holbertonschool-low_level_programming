#include "holberton.h"
/**
 * print_diagonal - print numbers since 0 to 14
 *
 * @n: times that _ should be printed
 * Decription: will print _
 * Return: Always 0
 */
void print_diagonal(int n)
{
	int d;
	int c;

	for (d = 0; d <= n; d++)
	{
		for (c = 0; c < n; c++)
		{
			if (d < c)
				_putchar(32);
			else if (d > c)
				_putchar(32);
			else if (d == c)
				_putchar(92);
		}
		_putchar(10);
	}
}

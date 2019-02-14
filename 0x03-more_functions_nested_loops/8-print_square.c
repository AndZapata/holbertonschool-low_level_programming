#include "holberton.h"
/**
 * print_square - print numbers since 0 to 14
 *
 * @size: times that # should be printed
 * Decription: will print _
 * Return: Always 0
 */
void print_square(int size)
{
	int d;
	int c;

	if (size > 0)
	{
		for (d = 0; d <= size; d++)
		{
			for (c = 0; c < size; c++)
			{
				if (d < size && c < size)
					_putchar(35);
			}
			if (d < size)
			_putchar(10);
		}
	}
	else
		_putchar(10);
}

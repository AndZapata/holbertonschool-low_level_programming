#include "holberton.h"
/**
 * print_most_numbers - print numbers except for 4 and 2
 *
 * Decription: will print from 0 to 9
 * Return: Always 0
 */
void print_most_numbers(void)
{
	int dig;

	for (dig = 48; dig <= 57; dig++)
	{
		if (dig != 50 && dig != 52)
			_putchar(dig);
	}
	_putchar(10);
}

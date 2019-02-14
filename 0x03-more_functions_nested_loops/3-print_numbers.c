#include "holberton.h"
/**
 * print_numbers - check the code for Holberton School students.
 *
 * Decription: will print from 0 to 9
 * Return: Always 0
 */
void print_numbers(void)
{
	int dig;

	for (dig = 48; dig <= 57; dig++)
	{
		_putchar(dig);
	}
	_putchar(10);
}

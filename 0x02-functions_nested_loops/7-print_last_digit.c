#include "holberton.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * @x: The operating number
 *
 * Description: The current file will print 0 or 1 depending if it's lowercase
 *
 * Return: r if it is positive, and -r if it is negative
 */
int print_last_digit(int x)
{
	if (x >= '0')
	{
		x = x % 10;
		_putchar(x + 48);
	}
	else
	{
		x = ((x % 10) * (-1));
		_putchar(x + 48);
	}
	return (x);
}

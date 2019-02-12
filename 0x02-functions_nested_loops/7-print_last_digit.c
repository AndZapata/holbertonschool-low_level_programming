#include "holberton.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * @lastd: variable that prints the absolute value
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
		_putchar(x + '0');
		return (x);
	}
	else
	{
		x = ((x % 10) * -1);
		     _putchar(x + '0');
		     return (x);
	}
}

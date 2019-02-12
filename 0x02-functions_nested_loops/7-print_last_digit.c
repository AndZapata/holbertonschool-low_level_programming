#include "holberton.h"
/**
 * print_last_digit - prints the last digit of a number
 *
<<<<<<< HEAD
 * @x: The operating number
=======
 * @x: variable that prints the absolute value
>>>>>>> f9f2729b1d4e6e9493e530223fcc7ae5343cc396
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
<<<<<<< HEAD
=======
		return (x);
>>>>>>> f9f2729b1d4e6e9493e530223fcc7ae5343cc396
	}
	else
	{
		x = x % 10;
		x = x * -1;
		_putchar(x + '0');
	}
	return (x);
}

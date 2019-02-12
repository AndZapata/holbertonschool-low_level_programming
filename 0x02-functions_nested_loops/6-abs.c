#include "holberton.h"
/**
 * _abs - prints the absolute value of an integer
 *
 * @n: variable that prints the absolute value
 *
 * Description: The current file will print 0 or 1 depending if it's lowercase
 *
 * Return: r if it is positive, and -r if it is negative
 */

int _abs(int r)
{
	if (r < 0)
	{
		return (-r);
	}
	else
	{
		return (r);
	}
	return (0);
}

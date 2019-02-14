#include "holberton.h"
/**
 * _isdigit - check the code for Holberton School students.
 *
 * @c: The digit that cames from main
 * Decription: will return 1 if it's a digit, 0 if don't
 * Return: Always 0
 */
int _isdigit(int c)
{
	return ((c >= 48 && c <= 57) ? 1 : 0);
}

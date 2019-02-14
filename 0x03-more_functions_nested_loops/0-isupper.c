#include "holberton.h"
/**
 * _isupper - check the code for Holberton School students.
 *
 * @c: The character that cames from main
 * Decription: will return 1 if it's uppercase, 0 if don't
 * Return: Always 0
 */
int _isupper(int c)
{
	return ((c >= 65 && c <= 90) ? 1 : 0);
}

#include "holberton.h"
/**
 * _islower - select the alphabet in lowercase
 *
 * @c: variable that does something
 *
 *
 * Description: The current file will print 0 or 1 depending if it's lowercase
 *
 * Return: always 0
 */

int _islower(int c)
{
	return ((c >= 97 && c <= 122) ? 1 : 0);
}

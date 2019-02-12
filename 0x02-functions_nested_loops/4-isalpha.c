#include "holberton.h"
/**
 * _isalpha - select the alphabet in lowercase
 *
 * @c: variable that tell us if it's alphabet or not
 *
 *
 * Description: The current file will print 0 or 1 depending if it's lowercase
 *
 * Return: always 0
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

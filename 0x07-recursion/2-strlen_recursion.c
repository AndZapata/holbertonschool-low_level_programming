#include "holberton.h"
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: pointer to the string
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{

	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}

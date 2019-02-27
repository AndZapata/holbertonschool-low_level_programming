#include "holberton.h"
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: pointer to the string
 * Return: Always 0.
 */
void _print_rev_recursion(char *s)
{

	if (*s != 0)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

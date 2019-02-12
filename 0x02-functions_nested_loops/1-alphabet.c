#include "holberton.h"
/**
 * print_alphabet - Entry point
 * function_name - print alphabet from a to z in order, in lowercase
 *
 * Description: The current file will print alphabet in lowercase
 *
 * Return: always 0
 */

void print_alphabet(void)
{
	char alphal;

	for (alphal = 'a' ; alphal <= 'z' ; alphal++)
	{
		_putchar(alphal);
	}
	_putchar('\n');
}

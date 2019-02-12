#include "holberton.h"
/**
 * print_alphabet - Entry point
 * function_name - print alphabet from a to z in order, in lowercase
 *
 * Description: The current file will print alphabet in lowercase
 *
 * Return: always 0
 */

void print_alphabet_x10(void)
{
	int num, alpha;

	for (num =  0; num < 10  ; num++)
	{
		for (alpha = 'a' ; alpha <= 'z' ; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}

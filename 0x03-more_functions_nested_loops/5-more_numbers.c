#include "holberton.h"
/**
 * more_numbers - print numbers since 0 to 14
 *
 * Decription: will print from 0 to 9
 * Return: Always 0
 */
void more_numbers(void)
{
	int d1;
	int dig2;

	for (d1 = 0; d1 <= 9; d1++)
	{
		for (dig2 = 0; dig2 <= 14; dig2++)
		{
			if ((dig2 / 10) != 0)
			{
				_putchar((dig2 / 10) + 48);
			}
			_putchar((dig2 % 10) + 48);
		}
		_putchar(10);
	}
}

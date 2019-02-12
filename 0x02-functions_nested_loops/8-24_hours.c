#include "holberton.h"
/**
 * jack_bauer - prints numbers from 00:00 to 23:59
 *
 *
 * Description: The current file will print 0 or 1 depending if it's lowercase
 *
 * Return: r if it is positive, and -r if it is negative
 */
void jack_bauer(void)
{
	int hour;
	int minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute <= 59; minute++)
		{
			_putchar((hour / 10) + 48);
			_putchar((hour % 10) + 48);
			_putchar(58);
			_putchar((minute / 10) + 48);
			_putchar((minute % 10) + 48);
			if (hour == 23 && minute == 59)
			{
			}
			else
			{
				_putchar('\n');
			}
		}
		_putchar('\n');
	}
}

#include "holberton.h"
/**
 * times_table - prints numbers from 00:00 to 23:59
 *
 * Description: The current file will print 00:00 to 23:59
 */
void times_table(void)
{
	int x;
	int y;
	int z;

	z = 0;
	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			z = x * y;
			if (z <= 9)
			{
				if (y > 0)
				{
				_putchar(32);
				_putchar(32);
				}
				_putchar(z + 48);
				if (y != 9)
				{
					_putchar(44);
				}

			}
			else
			{
				_putchar(32);
				_putchar((z / 10) + 48);
				_putchar((z % 10) + 48);
				if (y != 9)
				{
					_putchar(44);
				}
			}
		}
		_putchar(10);
	}
}

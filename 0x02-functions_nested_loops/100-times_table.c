#include "holberton.h"
/**
 * print_times_table - prints numbers from 0 to 3
 * @n: number from main
 * Description: The current will print numbers from 0 to 3
 */
void print_times_table(int n)
{
	int x, y, z;

	if (n >= 0 && n < 15)
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				z = x * y;
				if (y != 0)
				{
					_putchar(32);
					if (z > 99)
					{
						_putchar((z / 100) + 48);
						_putchar(((z / 10) % 10) + 48);
					}
					else if (z > 9 && z < 100)
					{
						_putchar(32);
						_putchar((z / 10) + 48);
					}
					else
					{
						_putchar(32);
						_putchar(32);
					}
					_putchar(z % 10 + 48);
					if (!(y > (n - 1)))
						_putchar(44);
					continue;
				}
				_putchar(y + 48);
				if (n != 0)
					_putchar(44);
			}
			_putchar(10);
		}
	}
}

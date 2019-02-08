#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * funtion_name - if putchar
 * Description - prints the number
 * section header: int n
 * Return: 0 (success)
 */
int main(void)
{
	int h, t, u;

	for (h = '0'; h <= '7'; h++)
	{
		for (t = '1'; t <= '8'; t++)
		{
			for (u = '2'; u <= '9'; u++)
			{
				if (h < t && t < u)
				{
					putchar(h);
					putchar(t);
					putchar(u);
					if (h == '7' && t == '8' && u == '9')
					{
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

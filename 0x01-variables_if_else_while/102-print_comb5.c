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
	int th, h, t, u;

	for (th = '0' ; th <= '9' ; th++)
	{
		for (h = '0' ; h <= '9' ; h++)
		{
			for (t = '0' ; t <= '9' ; t++)
			{
				for (u = '0' ; u <= '9' ; u++)
				{
					if (h < u)
					{
						putchar(th);
						putchar(h);
						putchar(' ');
						putchar(t);
						putchar(u);
						if (th == '9' && h == '8' && t == '9' && u == '9')
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
	}
	putchar('\n');
	return (0);
}

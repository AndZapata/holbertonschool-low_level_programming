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
	int th, du;

	for (th = 0; th < 100; th++)
	{
		for (du = th + 1; du < 100; du++)
		{
			putchar((th / 10) + '0');
			putchar((th % 10) + '0');
			putchar(' ');
			putchar((du / 10) + '0');
			putchar((du % 10) + '0');
			if (th == 98 && du == 99)
			{
			}
			else
			{
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

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
	int m, n;

	for (m = '0'; m <= '8'; m++)
	{
		for (n = '0'; n <= '9'; n++)
		{
			if (m < n)
			{
				putchar(m);
				putchar(n);
				if (m == '8' && n == '9')
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
	putchar('\n');
	return (0);
}

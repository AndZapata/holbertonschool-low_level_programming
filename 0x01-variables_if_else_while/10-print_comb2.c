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
	int number;

	for (number = 0; number < 100; number++)
	{
/*for to loop the numbers since 0 to 9*/
		putchar((number / 10) + '0');
		putchar((number % 10) + '0');
	if (number < 99)
	{
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}

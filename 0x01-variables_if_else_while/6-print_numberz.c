#include <stdio.h>
/**
 * main - entry point
 * funtion_name - if putchar
 * Description - prints the numbers in base 10 from 0 to 9
 * section header: char
 * Return: 0 (success)
 */
int main(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
/*for to loop the number since 0 to 9*/
	{
		putchar(number);
	}
	putchar('\n');
	return (0);
}

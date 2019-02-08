#include <stdio.h>
/**
 * main - entry point
 * funtion_name - if putchar
 * Description - prints all numbers in base 16
 * section header: char
 * Return: 0 (success)
 */
int main(void)
{
	char number;

	for (number = '0'; number <= '9'; number++)
/*for to loop the numbers since 0 to 9*/
	{
		putchar(number);
	}

	for (number = 'a'; number <= 'f'; number++)
/*for to loop the alphabet since a to f*/
	{
		putchar(number);
	}
	putchar('\n');
	return (0);
}

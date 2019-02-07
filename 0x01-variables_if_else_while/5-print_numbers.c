#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * funtion_name - if putchar
 * Description - prints the alphabet in lowercase
 * section header: int n
 * Return: 0 (success)
 */
int main(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)

/*for to loop the alphabet since a to z*/
		putchar(number);
	putchar('\n');
	return (0);
}

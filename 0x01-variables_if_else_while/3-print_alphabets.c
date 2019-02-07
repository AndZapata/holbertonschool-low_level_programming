#include <stdio.h>
/**
 * main - entry point
 * funtion_name - if putchar
 * Description - prints the alphabet in lowercase, unless q, e
 * section header: char
 * Return: 0 (success)
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
/*for to loop the alphabet since a to z*/
	{
		putchar(alpha);
	}
	for (alpha = 'A'; alpha <= 'Z'; alpha++)
/*for to loop the alphabet since A to Z*/
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}

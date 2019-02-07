#include <stdlib.h>
#include <time.h>
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
		if (alpha != 'q' && alpha != 'e')
		{
		putchar(alpha);
		}
	}
	putchar('\n');
	return (0);
}

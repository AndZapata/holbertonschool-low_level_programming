#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * funtion_name - if putchar
 * Description - prints the alphabet in lowercase from z to a
 * section header: int n
 * Return: 0 (success)
 */
int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)

/*for to loop the alphabet since z to a*/
		putchar(alpha);
	putchar('\n');
	return (0);
}

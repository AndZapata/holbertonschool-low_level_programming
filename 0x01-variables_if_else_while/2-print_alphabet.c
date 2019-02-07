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
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)

/*for to loop the alphabet since a to z*/
		putchar(alpha);
	putchar('\n');
	return (0);
}

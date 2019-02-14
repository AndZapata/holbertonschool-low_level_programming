#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints adds on 3 and 5 multiples
 * Return: Always 0
 */
int main(void)
{
	int a;
	int n;

	n = 0;
	for (a = 1; a < 1024; a++)
	{
		if ((a % 3 == 0) || (a % 5 == 0))
			n = n + a;
	}
	printf("%d\n", n);
	return (0);
}
